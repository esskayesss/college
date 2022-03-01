#include <stdio.h>

int main(){
    int rows, spaces;
    printf("Enter the number or rows: ");
    scanf("%d", &rows);

    spaces = rows - 1;

    for(int i = 0; i < rows; i++){
        for(int space = 0; space < spaces; space++) printf(" ");
        spaces--;

        for(int num = 1; num <= i+1; num++){
            printf("%d", num);
        }
        printf("\n");
    }
}
