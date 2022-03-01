#include <stdio.h>
#include <stdbool.h>

int main(){
    int number, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &number);

    int sign = (number < 0)?-1:1;
    number = (number < 0)?-number:number;

    do{
        sum *= 10;
        sum += number % 10;
        number /= 10;
    }while(number > 0);

    printf("The number in reverse is %d\n", sign*sum);
}
