#include <stdio.h>

int main(){
    int n;
    double sum = 0;
    printf("Enter the value for n: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum += i * 1.0 / (i + 1);
    }
    printf("The sum is %lf\n", sum);
}
