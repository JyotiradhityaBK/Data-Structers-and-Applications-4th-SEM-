#include <stdio.h>
#include <stdlib.h>


int main() {

    srand(time(NULL));
    FILE *file = fopen("numbers.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    for (int i = 0; i < 10; i++) {
        int random_num = rand() % 100;
        fprintf(file, "%d\n", random_num);
    }
    fclose(file);


    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    int num, max;

    while (fscanf(file, "%d", &num) != EOF) {
        if (num > max) {
            max = num;
        }
    }

    fclose(file);

    printf("The maximum number in the file is: %d\n", max);
    return 0;
}
