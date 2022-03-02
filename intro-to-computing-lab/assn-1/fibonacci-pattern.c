#include <stdio.h>

int main(){
    int rows, first=0, second = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i = 0; i < rows; i++){
        int cols = first + second;
        first = second;
        second = cols;

        for(int j = 0; j < cols; j++)
            printf("*");

        printf("\n");
    }
}
