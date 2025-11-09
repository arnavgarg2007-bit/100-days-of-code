//Find the second largest element in an array.

#include <stdio.h>
int main() {
    int n, i, largest, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    if(n < 2) {
        printf("Array must have at least two elements\n");
        return 0;
    }
    largest = second = -1000000;
    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    if(second == -1000000)
        printf("No second largest element\n");
    else
        printf("Second largest element = %d\n", second);
    return 0;
}
