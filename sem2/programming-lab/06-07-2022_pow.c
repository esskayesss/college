#include <stdio.h>
#include <stdlib.h>

float power(float base, int pow){
    if(pow == 0){
        return 1;
    }
    return base * power(base, pow-1);
}

int main(int argc, char** argv){
    if(argc != 3){
        printf("Usage: %s base<float> power<int>\n", argv[0]);
        return 1;
    }
    float base = atof(argv[1]);
    int pow = atoi(argv[2]);
    printf("%.2f ^ %d = ", base, pow);
    if (pow < 0){
        base = 1/base;
        pow *= -1;
    }
    printf("%.2f\n", power(base, pow));
    return 0;
}
