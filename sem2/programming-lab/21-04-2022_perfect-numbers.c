#include <stdio.h>
#include <math.h>

int sum_of_factors(int num){
    int sum = 1;

    for(int i = 2; i <= num/2; i++)
        if(num % i == 0) sum += i;

    return sum;
}

int main(){
    int num;
    printf("Enter the number to verify perfection: ");
    scanf("%d", &num);

    if(sum_of_factors(num) == num){
        printf("%d is a perfect number.\n", num);
    } else{
        printf("%d is not a perfect number.\n", num);
    }
}
