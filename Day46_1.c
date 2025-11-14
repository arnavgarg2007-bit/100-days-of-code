//Remove all vowels from a string.

#include <stdio.h>

int main() {
    char s[300], out[300];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int i = 0, j = 0;
    while(s[i] != '\0' && s[i] != '\n') {
        char ch = s[i];
        char x = ch;
        if(x >= 'A' && x <= 'Z') x += 32;
        if(x!='a' && x!='e' && x!='i' && x!='o' && x!='u') {
            out[j++] = ch;
        }
        i++;
    }
    out[j] = '\0';

    printf("String without vowels: %s\n", out);
    return 0;
}

