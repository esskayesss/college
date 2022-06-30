#include <stdio.h>
#include <stdlib.h>

int main(){
    int rows, cols, rows_2, cols_2;
    printf("Enter the number of rows and columns in first matrix: ");
    scanf("%d%d", &rows, &cols);
    printf("Enter the number of rows and columns in second matrix: ");
    scanf("%d%d", &rows_2, &cols_2);
    if(rows != rows_2 && cols != cols_2){
        fprintf(stderr, "Invalid sizes. The number of rows and columns in both the matrices must be equal.\n");
    }
    int m1[rows][cols], m2[rows][cols], sum[rows][cols];
    printf("Enter the elements of matrix 1\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &m1[i][j]);
    printf("Enter the elements of matrix 2\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            scanf("%d", &m2[i][j]);

    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            sum[i][j] = m1[i][j] + m2[i][j];

    printf("The result of summating M1 and M2 is:\n");
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            printf("%d\t", sum[i][j]);    
}
