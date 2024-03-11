#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char *random_name() {
    static char name[20];
    int length = rand() % 10 + 5;
    for (int i = 0; i < length; i++) {
        name[i] = 'a' + (rand() % 26);
    }
    name[length] = '\0';
    return name;
}

int main() {
    srand(time(NULL));

    FILE *file = fopen("names.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < 20; i++) {
        fprintf(file, "%s\n", random_name());
    }

    fclose(file);
    return 0;
}
