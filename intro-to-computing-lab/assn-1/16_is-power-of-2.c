#include <stdio.h>

int main(){
    int num, prod = 1;
    printf("Enter the number: ");
    scanf("%d", &num);
    while(prod < num) prod *= 2;
    if(prod == num){
        printf("%d is a power of 2.\n", num);
    } else{
        printf("%d is not a power of 2.\n", num);
    }
}
