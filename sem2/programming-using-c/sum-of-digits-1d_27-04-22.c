#include <stdio.h>

int sum_of_digits(int num){
    int sum = 0;
    while(num > 0){
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int sum = num;
    do{
        sum = sum_of_digits(sum);
    } while(sum > 10);
    printf("1 digit sum of the number %d is %d.\n", num, sum);
}
