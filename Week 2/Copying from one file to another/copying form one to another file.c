#include <stdio.h>

int main() {

    FILE *source = fopen("source.txt", "w");
    if (source == NULL) {
        printf("Error creating source file!\n");
        return 1;
    }
    fprintf(source, "KLE.\n");
    fprintf(source, "BVB.\n");
    fprintf(source, "HUBBALLI.\n");
    fclose(source);


    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }


    FILE *dest = fopen("destination.txt", "w");
    if (dest == NULL) {
        printf("Error opening destination file!\n");
        fclose(source);
        return 1;
    }

    int c;
    while ((c = fgetc(source)) != EOF) {
        fputc(c, dest);
    }

    fclose(source);
    fclose(dest);
    printf("File copied successfully.\n");
    return 0;
}
