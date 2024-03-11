#include<stdio.h>
struct browser
{
char name[25];
char copyright[25];
float version;
};
void display(char[],char[],float);
main()
{
struct browser b1={"chrome","GoogleInc",71.0};
display(b1.name,b1.copyright,b1.version);
}
void display(char copyright[25],char name[25],float version)
{
printf("%s,%s,%f",name,copyright,version);
}
