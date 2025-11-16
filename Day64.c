//Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.


#include <stdio.h>

int main() {
    char s[1001];
    printf("Enter a string: ");
    if(!fgets(s, sizeof(s), stdin)) return 0;

    int last[256];
    for(int i=0;i<256;i++) last[i] = -1;

    int start = 0, maxlen = 0;
    for(int i=0; s[i] != '\0' && s[i] != '\n'; i++) {
        unsigned char ch = (unsigned char)s[i];
        if(last[ch] >= start) start = last[ch] + 1;
        last[ch] = i;
        int len = i - start + 1;
        if(len > maxlen) maxlen = len;
    }

    printf("%d\n", maxlen);
    return 0;
}
