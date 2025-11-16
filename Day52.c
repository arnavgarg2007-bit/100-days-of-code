//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter sorted elements:\n");
    for(int i=0;i<n;i++) scanf("%d", &a[i]);

    int target;
    printf("Enter target: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    for(int i=0;i<n;i++){
        if(a[i] == target){
            first = i;
            break;
        }
    }

    for(int i=n-1;i>=0;i--){
        if(a[i] == target){
            last = i;
            break;
        }
    }

    if(first == -1) printf("-1 -1\n");
    else printf("%d %d\n", first, last);

    return 0;
}
