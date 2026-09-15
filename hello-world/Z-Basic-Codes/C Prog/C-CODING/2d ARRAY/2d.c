#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows and columns: ");
    scanf("%d", &n);

    int a[n][n], b[n][n], c[n][n];

    printf("Enter elements of first matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Addition of matrices
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Resultant matrix after addition:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
