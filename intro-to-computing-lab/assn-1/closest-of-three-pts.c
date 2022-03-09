#include <stdio.h>
#include <math.h>

float distance(int x1, int y1, int x2, int y2){
    return sqrt(pow(y2 - y1, 2) + pow(x2 - x1, 2));
}

int main(){
    float x1, x2, x3, y1, y2, y3;
    printf("Enter the co-ordinates in order x1, y1, x2, y2, x3, y3: ");
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
    float d12 = distance(x1, y1, x2, y2);
    float d13 = distance(x1, y2, x3, y3);
    float d23 = distance(x2, y2, x3, y3);
    float min = d12;
    if(d13 < min) min = d13;
    if(d23 < min) min = d23;

    if(min == d12){
        printf("(%.2f, %.2f), (%.2f, %.2f)\n", x1, y1, x2, y2);
    } else if(min == d13){
        printf("(%.2f, %.2f), (%.2f, %.2f)\n", x1, y1, x3, y3);
    } else{
        printf("(%.2f, %.2f), (%.2f, %.2f)\n", x2, y2, x3, y3);
    }
}
