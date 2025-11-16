//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.


#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if(scanf("%d", &n) != 1 || n <= 0) { printf("Invalid input\n"); return 0; }

    int a[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++) scanf("%d", &a[i]);

    int k;
    printf("Enter k: ");
    if(scanf("%d", &k) != 1 || k <= 0 || k > n) { printf("Invalid input\n"); return 0; }

    long long sum = 0;
    for(int i=0;i<k;i++) sum += a[i];
    long long mx = sum;

    for(int i=k;i<n;i++){
        sum += a[i];
        sum -= a[i-k];
        if(sum > mx) mx = sum;
    }

    printf("%lld\n", mx);
    return 0;
}
