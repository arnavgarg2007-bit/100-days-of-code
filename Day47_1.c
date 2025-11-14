//Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    char a[300], b[300];
    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);

    int f1[256] = {0}, f2[256] = {0};
    int i = 0;

    while(a[i] != '\0' && a[i] != '\n') {
        f1[(unsigned char)a[i]]++;
        i++;
    }

    i = 0;
    while(b[i] != '\0' && b[i] != '\n') {
        f2[(unsigned char)b[i]]++;
        i++;
    }

    int ok = 1;
    for(i=0;i<256;i++){
        if(f1[i] != f2[i]) {
            ok = 0;
            break;
        }
    }

    if(ok) printf("Strings are anagrams\n");
    else printf("Strings are not anagrams\n");

    return 0;
}
