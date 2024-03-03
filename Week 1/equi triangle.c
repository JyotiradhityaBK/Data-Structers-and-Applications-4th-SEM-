#include <stdio.h>
main()
{
int a,b,c;
printf("Enter 3 Sides of triangle\n");
scanf("%d%d%d",&a,&b,&c);
if(a==b&&b==c)
{
printf("The given Triangle Is Equilateral triangle\n");
}
else
{
printf("The given Triangle Is not an Equilateral triangle\n");
}
}
