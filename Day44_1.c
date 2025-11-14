//Count spaces, digits, and special characters in a string

#include <stdio.h>

int main() {
    char s[300];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int spaces = 0, digits = 0, special = 0, i = 0;

    while(s[i] != '\0' && s[i] != '\n') {
        char ch = s[i];
        if(ch == ' ') spaces++;
        else if(ch >= '0' && ch <= '9') digits++;
        else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {}
        else special++;
        i++;
    }

    printf("Spaces = %d\n", spaces);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d\n", special);

    return 0;
}
