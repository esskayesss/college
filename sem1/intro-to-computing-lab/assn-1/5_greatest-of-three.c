#include <stdio.h>

int max(int a, int b, int c){
    int max = a;
    
    if(max < b) max = b;
    if(max < c) max = c;
    return max;
}

int max_ternary(int a, int b, int c){
    return (a > b)?((a>c)?a:c):((b>c)?b:c);
}


int main(){
    int a, b, c;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("(ternary)  The greatest of the numbers %d, %d and %d is %d.\n", a, b, c, max_ternary(a,b,c));    
    printf("(if)       The greatest of the numbers %d, %d and %d is %d.\n", a, b, c, max(a,b,c));    
}
