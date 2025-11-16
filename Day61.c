//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.


#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    for(int i = 0; i <= n - k; i++) {
        int mx = a[i];
        for(int j = i + 1; j < i + k; j++) {
            if(a[j] > mx) mx = a[j];
        }
        printf("%d ", mx);
    }
    printf("\n");

    return 0;
}
