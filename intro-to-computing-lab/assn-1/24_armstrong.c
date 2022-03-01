#include <stdio.h>

int main(){
    int number, copy;
    printf("Enter a number: ");
    scanf("%d", &number);
    copy = number;

    while(number > 0){
        int digit = number % 10;
        copy -= digit * digit * digit;
        number /= 10;
    }
    if(copy == 0) printf("The number is armstrong.\n");
    else printf("The number is not armstrong.\n");
}
