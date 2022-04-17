#include <stdio.h>
#include <math.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int num1, num2;
    printf("Enter the two numbers: ");
    scanf("%d%d", &num1, &num2);

    int a = num1, b = num2;

    while(a - b != 0){
        if(b > a) swap(&a, &b);
        int diff = abs(a - b);
        a = b, b = diff;
    }
    printf("The HCF of %d and %d is %d\n", num1, num2, a);
}
