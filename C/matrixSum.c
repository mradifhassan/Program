#include <stdio.h>
int main(){
    int m, n;
    printf("Enter row number: ");
    scanf("%d", &m);
    printf("Enter column number: ");
    scanf("%d", &n);
    int matrix_a[m][n];
    int matrix_b[m][n];
    printf("Put element for matrix A\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Enter %d %d element: ", i + 1, j + 1);
            scanf("%d", &matrix_a[i][j]);
        }
    }
    printf("matrix A:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrix_a[i][j]);
        }
        printf("\n");
    }
    printf("Put element for matrix B\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Enter %d %d element: ", i + 1, j + 1);
            scanf("%d", &matrix_b[i][j]);
        }
    }
    printf("matrix B:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrix_b[i][j]);
        }
        printf("\n");
    }
    printf("Sum of A and B matrix is:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrix_a[i][j] + matrix_b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
