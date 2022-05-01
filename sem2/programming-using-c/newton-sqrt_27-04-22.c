#include <stdio.h>
#include <math.h>

double assume_root(double ex, double num){
    return 0.5 * (ex + num/ex);
}

int main(){
    double num;
    double p, q;

    printf("Enter the number: ");
    scanf("%lf", &num);
    p = num/2;

    do{
        q = assume_root(p, num);
        if(fabs(p - q) < 0.00001) break;
        p = q;
    } while(1);

    printf("%lf\n", p);
}
