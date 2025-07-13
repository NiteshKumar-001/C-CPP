#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    long size;

    printf("Enter the name of the file: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Unable to open file!\n");
        return 1;
    }

    fseek(file, 0, SEEK_END);

    size = ftell(file);
    
    fclose(file);

    printf("Size of the file %s: %ld bytes\n", filename, size);

    return 0;
}
