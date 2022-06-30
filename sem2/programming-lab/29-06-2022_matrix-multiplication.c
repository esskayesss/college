#include <stdio.h>
#include <stdlib.h>

int main(){
    int m1_r, m1_c, m2_r, m2_c;
    printf("Enter the number of rows and columns in matrix 1: ");
    scanf("%d %d", &m1_r, &m1_c);
    printf("Enter the number of rows and columns in matrix 2: ");
    scanf("%d %d", &m2_r, &m2_c);
    if(m2_r != m1_c){
        fprintf(stderr, "Invalid sizes specified. Number of rows of second matrix must be equal to the number of columns in the first matrix.\n");
        exit(1);
    }

    int m1[m1_r][m1_c];
    int m2[m2_r][m2_c];

    printf("Enter the values in the matrix1 row-wise.\n");
    for(int i = 0; i < m1_r; i++)
        for(int j = 0; j < m1_c; j++)
            scanf("%d", &m1[i][j]);

    printf("Enter the values in the matrix2 row-wise.\n");
    for(int i = 0; i < m2_r; i++)
        for(int j = 0; j < m2_c; j++)
            scanf("%d", &m2[i][j]);

    printf("multiplying...\n");

    int prod[m1_r][m2_c];
    for(int i = 0; i < m1_r; i++){
        for(int j = 0; j < m2_c; j++){
            prod[i][j] = 0;
            for(int k = 0; k < m1_c; k++)
                prod[i][j] += m1[i][k] * m2[k][j];
        }
    }

    for(int i = 0; i < m1_r; i++){
        for(int j = 0; j < m2_c; j++)
            printf("%d ", prod[i][j]);
        printf("\n");    
    }
}
