//Print all sub-strings of a string.

#include <stdio.h>

int main() {
    char s[300];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int len = 0;
    while(s[len] != '\0' && s[len] != '\n') len++;

    for(int i = 0; i < len; i++) {
        for(int j = i; j < len; j++) {
            for(int k = i; k <= j; k++) {
                printf("%c", s[k]);
            }
            printf("\n");
        }
    }

    return 0;
}

