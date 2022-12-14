#include<stdio.h>

int main()

{

int aaddr[]={5,4,3,2,1};

int xaddr,yaddr;

int *paddr=&aaddr[2];

*paddr++;

xaddr=++*paddr;

yaddr=*(paddr++);

printf("%d %d",xaddr,yaddr);

return 0;          

}
