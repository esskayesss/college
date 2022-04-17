#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int num1, num2;

    printf("Enter the two number: ");
    scanf("%d %d", &num1, &num2);
    
    if(num1 < num2) swap(&num1, &num2);

    while(num2 % num1 != 0){
        int rem = num2 % num1;
        num2 = num1;
        num1 = rem;
    }
    printf("GCD is %d.\n", num1);

}
