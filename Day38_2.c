//Check if a matrix is symmetric.

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

    int ok = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j] != a[j][i]) {
                ok = 0;
                break;
            }
        }
        if(!ok) break;
    }

    if(ok) printf("Matrix is symmetric\n");
    else printf("Matrix is not symmetric\n");

    return 0;
}
