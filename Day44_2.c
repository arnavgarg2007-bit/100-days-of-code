//Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
    char s[300];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int i = 0;
    while(s[i] != '\0' && s[i] != '\n') {
        if(s[i] == ' ') s[i] = '-';
        i++;
    }

    printf("Modified string: %s", s);
    return 0;
}


