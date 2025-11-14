//Count vowels and consonants in a string.

#include <stdio.h>

int main() {
    char s[200];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int v = 0, c = 0, i = 0;
    while(s[i] != '\0' && s[i] != '\n') {
        char ch = s[i];
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            char x = ch;
            if(x >= 'A' && x <= 'Z') x += 32;
            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u') v++;
            else c++;
        }
        i++;
    }

    printf("Vowels = %d\n", v);
    printf("Consonants = %d\n", c);
    return 0;
}

