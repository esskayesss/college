#include <stdio.h>
#include <math.h>

int main(){
    int n;
    double sinx, term, x;

    printf("Enter the number of terms to consider: ");
    scanf("%d", &n);
    printf("Enter the value for x: ");
    scanf("%lf", &x);

    term = x;
    sinx = term;

    for(int i = 1; i < n; i++){
        term *= (-1) * pow(x, 2) / (4 * i * i + 2 * i);
        sinx += term;
    }

    printf("sin(%lf) = %lf\n", x, sinx);
}
