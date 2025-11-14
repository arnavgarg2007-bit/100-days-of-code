//Print each character of a string on a new line.

#include <stdio.h>

int main() {
    char s[200];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int i = 0;
    while(s[i] != '\0' && s[i] != '\n') {
        printf("%c\n", s[i]);
        i++;
    }

    return 0;
}
