#include <stdio.h>

void swap_without_third_var(int a, int b){
    a += b;
    b = a - b;
    a = a - b;
    printf("a = %d, b = %d\n", a, b);
}

void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a, b);
}

int main(){
    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    swap_without_third_var(a, b);
    swap(a, b);
}
