#include <stdio.h>

int main(){
    int n, t1 = 0, t2 = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("%d\n%d\n", t1, t2);
    for(int i = 2; i < n; i++){
        int sum = t1 + t2;
        printf("%d\n", sum);
        t1 = t2;
        t2 = sum;
    }
}
