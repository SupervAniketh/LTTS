#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copyFile(FILE *source, FILE *destination, char option);

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s <option> <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    char option = argv[1][1]; // Assuming the option is a single character

    FILE *source = fopen(argv[2], "r");
    if (source == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    FILE *destination = fopen(argv[3], "w");
    if (destination == NULL) {
        printf("Error opening destination file.\n");
        fclose(source);
        return 1;
    }

    copyFile(source, destination, option);

    fclose(source);
    fclose(destination);

    return 0;
}

void copyFile(FILE *source, FILE *destination, char option) {
    int ch;
    while ((ch = fgetc(source)) != EOF) {
        switch (option) {
            case 'u':
                fputc(toupper(ch), destination);
                break;
            case 'l':
                fputc(tolower(ch), destination);
                break;
            case 's':
                fputc(toupper(ch), destination);
                break;
            default:
                fputc(ch, destination);
                break;
        }
    }
}
