//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.


#include <stdio.h>

int main() {
    FILE *in, *out;
    char c;

    in = fopen("input.txt", "r");
    if(in == NULL) {
        printf("Could not open input.txt\n");
        return 0;
    }

    out = fopen("output.txt", "w");
    if(out == NULL) {
        printf("Could not open output.txt\n");
        fclose(in);
        return 0;
    }

    while((c = fgetc(in)) != EOF) {
        if(c >= 'a' && c <= 'z') c = c - 32;
        fputc(c, out);
    }

    fclose(in);
    fclose(out);

    printf("Conversion completed. Check output.txt\n");
    return 0;
}
