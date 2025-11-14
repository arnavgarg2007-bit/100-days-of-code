//Print the initials of a name

#include <stdio.h>

int main() {
    char s[200];
    printf("Enter a name: ");
    fgets(s, sizeof(s), stdin);

    int i = 0;
    if(s[0] != ' ' && s[0] != '\n') printf("%c ", s[0]);

    while(s[i] != '\0' && s[i] != '\n') {
        if(s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\n' && s[i+1] != '\0') {
            printf("%c ", s[i+1]);
        }
        i++;
    }

    return 0;
}
