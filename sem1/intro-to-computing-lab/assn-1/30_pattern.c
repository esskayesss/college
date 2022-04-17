#include <stdio.h>

int main(){
    int rows, count = 1;
    printf("Enter the number or rows: ");
    scanf("%d", &rows);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j <= i; j++){
            printf("%d\t", count++);
        }
        printf("\n");
    }
}

