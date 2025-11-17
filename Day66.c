//Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".


#include <stdio.h>

int main() {
    int n, target;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter target: ");
    scanf("%d", &target);

    int i, j, found = 0;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] + a[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if(found) break;
    }

    if(!found) printf("-1 -1\n");

    return 0;
}
