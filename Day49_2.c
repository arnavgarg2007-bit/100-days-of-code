//Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    char s[300];
    printf("Enter full name: ");
    fgets(s, sizeof(s), stdin);

    int i = 0;

    while(s[i] == ' ') i++;

    printf("%c.", s[i]);
    i++;
    while(s[i] != ' ' && s[i] != '\0' && s[i] != '\n') i++;

    while(s[i] != '\0' && s[i] != '\n') {
        while(s[i] == ' ') i++;
        if(s[i] == '\0' || s[i] == '\n') break;

        int j = i;
        while(s[j] != ' ' && s[j] != '\0' && s[j] != '\n') j++;

        if(s[j] == '\0' || s[j] == '\n') {
            while(i < j) {
                printf("%c", s[i]);
                i++;
            }
            break;
        } else {
            printf(" %c.", s[i]);
            i = j;
        }
    }

    printf("\n");
    return 0;
}
