//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.


#include <stdio.h>

int main() {
    FILE *fp;
    int x, sum = 0, count = 0;

    fp = fopen("numbers.txt", "r");
    if(fp == NULL) {
        printf("Could not open numbers.txt\n");
        return 0;
    }

    while(fscanf(fp, "%d", &x) == 1) {
        sum += x;
        count++;
    }

    fclose(fp);

    if(count == 0) {
        printf("No numbers found\n");
        return 0;
    }

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", (float)sum / count);

    return 0;
}
