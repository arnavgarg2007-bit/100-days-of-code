//Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main() {
    char s[200];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int i = 0;
    while(s[i] != '\0' && s[i] != '\n') {
        char ch = s[i];
        if(ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        s[i] = ch;
        i++;
    }

    printf("Uppercase string: %s", s);
    return 0;
}
