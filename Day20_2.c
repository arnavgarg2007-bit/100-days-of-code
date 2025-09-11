//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    long long num, rev = 0, ans = 0;
    int rem;

    printf("Enter a binary number: ");
    scanf("%lld", &num);

    while (num > 0) {
        rem = num % 10;
        rem = (rem == 0) ? 1 : 0;  
        rev = rev * 10 + rem;
        num /= 10;
    }


    while (rev > 0) {
        ans = ans * 10 + (rev % 10);
        rev /= 10;
    }

    printf("1's Complement: %lld\n", ans);

    return 0;
}

