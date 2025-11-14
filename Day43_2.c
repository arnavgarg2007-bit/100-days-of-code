//Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char s[200];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int len = 0;
    while(s[len] != '\0' && s[len] != '\n') {
        len++;
    }

    int ok = 1;
    for(int i=0, j=len-1; i<j; i++, j--) {
        if(s[i] != s[j]) {
            ok = 0;
            break;
        }
    }

    if(ok) printf("String is a palindrome\n");
    else printf("String is not a palindrome\n");

    return 0;
}

