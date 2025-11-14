//Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char s[300];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int seen[26] = {0};
    int i = 0;
    char ans = '\0';

    while(s[i] != '\0' && s[i] != '\n') {
        char ch = s[i];
        if(ch >= 'a' && ch <= 'z') {
            int x = ch - 'a';
            if(seen[x] == 1) {
                ans = ch;
                break;
            }
            seen[x] = 1;
        }
        i++;
    }

    if(ans == '\0') printf("No repeating lowercase alphabet\n");
    else printf("First repeating lowercase alphabet: %c\n", ans);

    return 0;
}
