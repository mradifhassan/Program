#include <stdio.h>
int main(){
    int m, n;
    printf("Enter row number: ");
    scanf("%d", &m);
    printf("Enter column number: ");
    scanf("%d", &n);
    int matrix[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Enter %d %d element: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
