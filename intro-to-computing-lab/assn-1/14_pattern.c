#include <stdio.h>

int main(){
    int rows, spaces;
    printf("Enter the number or rows: ");
    scanf("%d", &rows);

    for(int i = 0; i < rows; i++){
        for(int j = 1; j <= i+1; j++){
            printf("%d", i+1);
        }
        printf("\n");
    }
}
