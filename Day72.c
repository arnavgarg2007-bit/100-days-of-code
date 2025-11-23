//Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.


#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("info.txt", "r");

    if(fp == NULL) {
        printf("Could not open file\n");
        return 0;
    }

    char line[200];
    while(fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
