#include <stdio.h>
#include <math.h>

double discriminant(double a, double b, double c){
    return b*b - 4 * a * c;
}

int main(){
    double a, b, c;
    printf("Enter the values for a, b, c in ax^x + bx + c = 0\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    double dis = discriminant(a, b, c);
    double fh = - b / (2 * a); 
    if (dis < 0){
        printf("Complex roots.\n");
        printf("%.2lf + %.2lfi and %.2lf - %.2lfi\n", fh, sqrt(-dis)/(2*a), fh, sqrt(-dis)/(2*a));
    } else{
        printf("%.2lf and %.2lfi\n", fh + sqrt(dis)/(2*a), fh - sqrt(dis)/(2*a));
    }
}
