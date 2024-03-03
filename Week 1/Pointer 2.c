void fun(int *a)
{
*a=0;
}
int main()
{
int a=25;
int *p=&a;
fun(p);
printf("%d",a);}
