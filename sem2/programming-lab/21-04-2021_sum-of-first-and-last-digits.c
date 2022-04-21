#include <stdio.h>

int sum_of_extremes(int n){
    int sum = n % 10;
    int digit;
    while(n != 0){
        digit = n % 10;
        n /= 10;
    }
    sum += digit;
    return sum;
}

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("%d is the sum of the first and the last digits of the number %d.\n", sum_of_extremes(num), num);
}
