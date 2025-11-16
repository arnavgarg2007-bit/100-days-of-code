//Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".


#include <stdio.h>

int main() {
    char s[300], t[300];
    printf("Enter first string: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter second string: ");
    fgets(t, sizeof(t), stdin);

    int f1[26] = {0}, f2[26] = {0};

    int i = 0;
    while(s[i] != '\0' && s[i] != '\n') {
        f1[s[i] - 'a']++;
        i++;
    }

    i = 0;
    while(t[i] != '\0' && t[i] != '\n') {
        f2[t[i] - 'a']++;
        i++;
    }

    int ok = 1;
    for(i = 0; i < 26; i++) {
        if(f1[i] != f2[i]) {
            ok = 0;
            break;
        }
    }

    if(ok) printf("Anagram\n");
    else printf("Not Anagram\n");

    return 0;
}
