//Toggle case of each character in a string.

#include <stdio.h>

int main() {
    char s[300];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int i = 0;
    while(s[i] != '\0' && s[i] != '\n') {
        char ch = s[i];
        if(ch >= 'a' && ch <= 'z') ch -= 32;
        else if(ch >= 'A' && ch <= 'Z') ch += 32;
        s[i] = ch;
        i++;
    }

    printf("Toggled string: %s", s);
    return 0;
}
