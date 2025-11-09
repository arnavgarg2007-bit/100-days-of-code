//Write a program to print all the prime numbers from 1 to n.


#include <stdio.h>
int main() {
    int n, i, j, flag;
    scanf("%d", &n);
    for(i = 2; i <= n; i++) {
        flag = 0;
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("%d ", i);
    }
    return 0;
}
