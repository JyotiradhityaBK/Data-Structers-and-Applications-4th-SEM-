main()
{
int n,i,marks,tot_marks=0;
float avg_marks;
printf("Enter no of Students\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
printf("enter marks of %d student\n",i);
scanf("%d",&marks);
tot_marks=tot_marks+marks;
}
avg_marks=(float)tot_marks/n;
printf("average marks=%f\n",avg_marks);






















}
