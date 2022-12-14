#include<stdio.h>
#include<stdlib.h>
 
struct node
{
    int data;
    struct node *next;
};
 
void deleteAlt(struct node *head)
{
    if (head == NULL)
        return;
 
    struct node *prev = head;
    struct node *node = head->next;
 
    while (prev != NULL && node != NULL)
    {
        prev->next = node->next;
 
        free(node);
 
        prev = prev->next;
        if (prev != NULL)
            node = prev->next;
    }
}

void push(struct node** hhead, int ddata)
{
    struct node* new_node =
        (struct node*) malloc(sizeof(struct node));
 
    new_node->data=ddata;
 
    new_node->next =*hhead;
 
    *hhead= new_node;
}
 
 
void display(struct node *hhead)
{
    while (hhead != NULL)
    {
        printf("%d ", hhead->data);
        hhead = hhead->next;
    }
}
 
int main()
{
struct node* head = NULL;

push(&head, 50);
push(&head, 40);
push(&head, 30);
push(&head, 20);
push(&head, 10); 
printf("\nList before delete \n");
display(head);
 
    deleteAlt(head);
 
printf("\nList after delete \n");
display(head);
 
return 0;
}
