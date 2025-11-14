//Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char s[300], ch;
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    printf("Enter character to count: ");
    scanf("%c", &ch);

    int count = 0, i = 0;
    while(s[i] != '\0' && s[i] != '\n') {
        if(s[i] == ch) count++;
        i++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);
    return 0;
}
