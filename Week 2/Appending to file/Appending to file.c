#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "KLE Technological University.\n");

    fclose(file);
    printf("Text appended to file.txt\n");
    return 0;
}
