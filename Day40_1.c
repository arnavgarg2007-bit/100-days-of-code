//Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");
    for(int i=0;i<n;i++){
        printf("%d ", a[i][i]);
    }
    for(int i=n-1;i>=0;i--){
        if(i != n-1 && i != 0 && n%2==1 && i == n/2) continue;
        if(i != n-1) printf("%d ", a[i][n-1-i]);
    }

    return 0;
}
