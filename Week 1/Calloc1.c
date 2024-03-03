#include<stdio.h>
#include<stdlib.h>
void main ()
{
int n,i,*ptr,sum=0;
printf("Enter number of Elements:");
scanf("%d",&n);
ptr=(int*)calloc(n,sizeof(int));
printf("Enter Elemets of Array:");
for(i=0;i<n;i++)
{scanf("%d",ptr+i);
sum+=*(ptr+i);
}
printf("sum=%d",sum);
free(ptr);
}
