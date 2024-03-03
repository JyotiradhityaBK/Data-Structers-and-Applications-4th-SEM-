 #include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
    printf("A is 1st Largest\n");
    if(b>c)
    {
        printf("B is 2nd Largest\n");
    }
    else
    {
        printf("C is 2nd Largest\n");
    }
    }
    else
        if(b>a&&b>c)
    {
        printf("B is 1st Largest\n");
        if(c>a)
        {
            printf("C is 2nd Largest\n");
        }
        else
        {
            printf("A is 2nd Largest\n");
        }
    }
    else
    {
        printf("C is 1st Largest\n");
        if(a>b)
        {
            printf("A is 1st Largest\n");
        }
        else
        {
            printf("B is 2nd Largest\n");
        }
    }
    return 0;
}
