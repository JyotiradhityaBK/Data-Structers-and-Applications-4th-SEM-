#include<stdio.h>
main()
{
float pr_ptrl,ptrl_ltr,dist,Rs,Mileage;
printf("Enter Price of petrol,Rs,Milrage");
scanf("%f%f%f",&pr_ptrl,&Rs,&Mileage);
ptrl_ltr=Rs/pr_ptrl;
dist=ptrl_ltr/Mileage;
printf("Distance Traveled=%f",dist);






}
