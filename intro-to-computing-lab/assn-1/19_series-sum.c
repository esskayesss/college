#include <stdio.h>

int main(){
    int sum = 0, num = 1, diff = 1, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(; n>0; sum += num, n--, num += diff, diff++);

    printf("The sum is %d\n", sum);
}
