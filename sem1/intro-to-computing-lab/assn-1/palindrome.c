#include <stdio.h>
#include <stdbool.h>

int main(){
    int number, sum = 0;
    bool is_even = true;

    printf("Enter the number: ");
    scanf("%d", &number);
    number = (number < 0)?-number:number;
    int copy = number;

    do{
        is_even = !is_even;
        sum *= 10;
        sum += number % 10;
        number /= 10;
    }while(number > 0);

    if(copy == sum){
        printf("%d is a palindrome.\n", copy);
        if(is_even){
            printf("\tEven\n");
        } else{
            printf("\tOdd\n");
        }
    } else{
        printf("%d is not palindrome.\n", copy);
    }
}
