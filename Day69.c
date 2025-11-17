//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.


#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], seen[n+1];
    for(int i = 0; i <= n; i++) seen[i] = 0;

    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    for(int i = 0; i < n; i++) {
        if(seen[a[i]] == 1) {
            printf("%d\n", a[i]);
            return 0;
        }
        seen[a[i]] = 1;
    }

    return 0;
}
