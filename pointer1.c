 #include<stdio.h>

                int main()
{
                int o[5]={1,2,3,4,5};

                int *ptr = (int*)(&o + 1);


                printf("%d %d", *(o + 1), *(ptr - 1));

                    return 0;          

                }
