#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    FILE *file = fopen("random.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }


    for (int i = 0; i < 10; i++) {
        int random_num = rand() % 100;
        fprintf(file, "%d\n", random_num);
    }

    fclose(file);
    printf("Random numbers written to random.txt\n");
    return 0;
}
