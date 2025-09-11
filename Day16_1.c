//Write a program to take a number as input and print its equivalent binary representation.

#include<stdio.h>
int main() {
    int num, div;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    div = 1;
    while (div <= num / 2) {
        div = div * 2;
    }

    printf("Binary representation: ");
    while (div > 0) {
        if (num >= div) {
            printf("1");
            num = num - div;
        } else {
            printf("0");
        }
        div = div / 2;
    }
    printf("\n");

    return 0;
}