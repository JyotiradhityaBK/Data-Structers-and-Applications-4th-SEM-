#include <stdio.h>
main()
{
float units;
float Amount;
printf("Enter Units Consumed\n");
scanf("%f",&units);

if(units>=0&&units<=100)
{
Amount=units*1.0;
//printf("Amount to be paid=%f",Amount);
}
else if(units>=101&&units<=200)
{
Amount=units*1.5;
//printf("Amount to be paid=%f",Amount);
}
else if(units>=201&&units<=450)
{
Amount=units*2.0;
//printf("Amount to be paid=%f",Amount);
}
else if(units>450)
{
Amount=units*3.0;
//printf("Amount to be paid=%f",Amount);
}if(units<0)
{
printf("Invalid Units");
}else
{
  printf("Amount to be paid=%f",Amount);
}
}
