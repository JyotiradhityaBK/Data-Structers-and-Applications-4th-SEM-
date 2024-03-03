main()
{
int n,i,f1=0,f2=1,f3;
printf("Enter a number\n");
scanf("%d",&n);
if(n==1)
printf("%d\n",f1);
else if(n==2)
printf("%d %d\n",f1,f2);
else
{
printf("%d %d\t",f1,f2);
for(i=3;i<=n;i++)
{
f3=f1+f2;
printf("%d\t",f3);
f1=f2;
f2=f3;
}







}

























}
