//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.


#include <stdio.h>

int main() {
    char filename[100];
    char line[300];

    printf("Enter file name: ");
    scanf("%s", filename);
    getchar();

    FILE *fp = fopen(filename, "a");
    if(fp == NULL) {
        printf("Could not open file\n");
        return 0;
    }

    printf("Enter text to append: ");
    fgets(line, sizeof(line), stdin);

    fputs(line, fp);

    fclose(fp);

    printf("Text appended successfully\n");
    return 0;
}
