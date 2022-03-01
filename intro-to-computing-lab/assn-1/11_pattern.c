#include <stdio.h>
#include <math.h>

int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    int spaces = rows - 1;

    for(int i = 0; i < rows; i++){
        int mid = i+1;
        // printing spaces
        for(int space = 0; space < spaces; space++)
            printf(" ");
        spaces--;

        for(int j = -i; j <= i; j++)
            printf("%d", mid - abs(j));
        printf("\n");
    }
}
