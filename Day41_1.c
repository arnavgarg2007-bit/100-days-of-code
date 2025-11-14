//Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char s[200];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int c = 0;
    while(s[c] != '\0' && s[c] != '\n') {
        c++;
    }

    printf("Number of characters = %d\n", c);
    return 0;
}
