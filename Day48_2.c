//Reverse each word in a sentence without changing the word order.

#include <stdio.h>

int main() {
    char s[300];
    printf("Enter a sentence: ");
    fgets(s, sizeof(s), stdin);

    int i = 0, start = 0;
    while(s[i] != '\0' && s[i] != '\n') {
        if(s[i] == ' ') {
            int l = start, r = i - 1;
            while(l < r) {
                char t = s[l];
                s[l] = s[r];
                s[r] = t;
                l++;
                r--;
            }
            start = i + 1;
        }
        i++;
    }

    int l = start, r = i - 1;
    while(l < r) {
        char t = s[l];
        s[l] = s[r];
        s[r] = t;
        l++;
        r--;
    }

    printf("Result: %s", s);
    return 0;
}

