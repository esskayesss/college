#include <stdio.h>
#include <stdlib.h>

int fact(int n){
    if(n == 1) return 1;
    return n*fact(n-1);
}

int main(int argc, char** argv){
    int num = atoi(*(argv+1));
    printf("factorial of %d is %d.\n", num, fact(num));
}
