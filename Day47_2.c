//Find the longest word in a sentence.

#include <stdio.h>

int main() {
    char s[300];
    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    int i = 0, start = 0, maxLen = 0, curLen = 0, maxStart = 0;

    while(1) {
        char ch = s[i];
        if(ch == ' ' || ch == '\n' || ch == '\0') {
            if(curLen > maxLen) {
                maxLen = curLen;
                maxStart = start;
            }
            if(ch == '\0' || ch == '\n') break;
            curLen = 0;
            start = i + 1;
        } else {
            curLen++;
        }
        i++;
    }

    printf("Longest word: ");
    for(int j = 0; j < maxLen; j++) {
        printf("%c", s[maxStart + j]);
    }
    printf("\n");

    return 0;
}
