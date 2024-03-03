#include <stdio.h>

void swap(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int c, d;

    printf("Enter the first number: ");
    scanf("%d", &c);

    printf("Enter the second number: ");
    scanf("%d", &d);

    printf("Before swapping, c = %d and d = %d\n", c, d);
    swap(&c,&d);
    printf("After swapping, c = %d and d = %d\n", c, d);

}
