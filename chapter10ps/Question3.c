// Question - 3 - Write a program to read a text file text by text and write its content twice in a seperate file
#include <stdio.h>

int main() {
    FILE *srcFile;
    FILE *destFile;
    char c;

    // Open the source file in read mode
    srcFile = fopen("table1.txt", "r");
    if (srcFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Open the destination file in write mode
    destFile = fopen("table2.txt", "w");
    if (destFile == NULL) {
        printf("Error opening destination file.\n");
        fclose(srcFile);
        return 1;
    }

    // Read the content of the source file and write it twice to the destination file
    while ((c = fgetc(srcFile)) != EOF) {
        fputc(c, destFile);
    }

    // Reset the file pointer to the beginning of the source file
    fseek(srcFile, 0, SEEK_SET);

    // Write the content of the source file again to the destination file
    while ((c = fgetc(srcFile)) != EOF) {
        fputc(c, destFile);
    }

    // Close both files
    fclose(srcFile);
    fclose(destFile);

    printf("Content copied successfully.\n");

    return 0;
}
