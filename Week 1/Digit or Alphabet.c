#include <stdio.h>
int main()
{
    char ch;
    ch=getchar();
    (ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')?printf("Alphabet character"):printf("Digit Character");
    return 0;
}
