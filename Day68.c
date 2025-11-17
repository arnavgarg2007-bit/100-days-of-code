//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number


#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the array elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    int total = n * (n + 1) / 2;
    int sum = 0;
    for(int i = 0; i < n; i++) sum += a[i];

    printf("%d\n", total - sum);
    return 0;
}
