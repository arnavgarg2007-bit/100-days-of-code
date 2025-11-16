//Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.


#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++) scanf("%d", &a[i]);

    printf("Next greater elements:\n");
    for(int i=0;i<n;i++) {
        int ng = -1;
        for(int j=i+1;j<n;j++) {
            if(a[j] > a[i]) { ng = a[j]; break; }
        }
        if(i) printf(", ");
        printf("%d", ng);
    }
    printf("\n");
    return 0;
}

