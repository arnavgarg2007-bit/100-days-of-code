//Write a program to take a string input. Change it to sentence case.


#include <stdio.h>

int main() {
    char s[300];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int i = 0;
    while(s[i] == ' ') i++;

    if(s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 32;

    i++;
    while(s[i] != '\0' && s[i] != '\n') {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + 32;
        i++;
    }

    printf("%s", s);
    return 0;
}
