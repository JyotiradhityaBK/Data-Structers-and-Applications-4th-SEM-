#include<stdio.h>
#include<stdlib.h>
void main()
{
    int * ptr,i,n1,n2;
    printf("enter the size of array\n");
    scanf("%d",&n1);
    ptr=(int*)malloc(n1 *sizeof(int));
    printf("addresses of previously allocated memories\n");
    for(i=0;i<n1;i++)
    {
       printf("%u\n",ptr+i);
       printf("enter the new size of array\n");
       scanf("%d",&n2);
       ptr=realloc(ptr,n2);
       printf("Address of newly allocated memory");
       for(i=0;i<n2;i++)
        printf("%u\n",ptr+i);
}
}
