//Reverse a string.


#include <stdio.h>

int main() {
    char s[200];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int len = 0;
    while(s[len] != '\0' && s[len] != '\n') {
        len++;
    }

    for(int i = 0, j = len - 1; i < j; i++, j--) {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
    }

    printf("Reversed string: %s\n", s);
    return 0;
}

