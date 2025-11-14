//Check if one string is a rotation of another.

#include <stdio.h>

int main() {
    char a[300], b[300];
    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);

    int la = 0, lb = 0;
    while(a[la] != '\0' && a[la] != '\n') la++;
    while(b[lb] != '\0' && b[lb] != '\n') lb++;

    if(la != lb) {
        printf("Second string is not a rotation of first\n");
        return 0;
    }

    char t[610];
    for(int i=0;i<2*la;i++) t[i] = a[i % la];
    t[2*la] = '\0';

    int found = 0;
    for(int i=0;i<=2*la - lb;i++) {
        int ok = 1;
        for(int j=0;j<lb;j++) {
            if(t[i+j] != b[j]) { ok = 0; break; }
        }
        if(ok) { found = 1; break; }
    }

    if(found) printf("Second string is a rotation of first\n");
    else printf("Second string is not a rotation of first\n");

    return 0;
}
