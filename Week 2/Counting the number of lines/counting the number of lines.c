#include <stdio.h>

int main() {

    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }
    fprintf(file, "line 1.\n");
    fprintf(file, "Line 2.\n");
    fprintf(file, "line 3.\n");
    fclose(file);


    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int line_count = 0;
    char c;
    while ((c = fgetc(file)) != EOF) {
        if (c == '\n') {
            line_count++;
        }
    }

    fclose(file);

    printf("The file has %d lines.\n", line_count);
    return 0;
}
