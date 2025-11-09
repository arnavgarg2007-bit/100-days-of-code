//Rotate an array to the right by k positions.

#include <stdio.h>
int main() {
    int n, k, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);
    k = k % n;
    printf("Array after rotating right by %d positions:\n", k);
    for(i = n - k; i < n; i++)
        printf("%d ", arr[i]);
    for(i = 0; i < n - k; i++)
        printf("%d ", arr[i]);
    return 0;
}
