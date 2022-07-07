#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n){
    if(n <= 1) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    int i = 5;
    while(i * i <= n){
        if(n % i == 0 || n % (i + 2) == 0) return false;
        i += 6;
    }
    return true;
}

int sum_primes(int n){
    int sum = 0;
    for(int i = 10; i <= n; i++){
        if(is_prime(i)){
            printf("%d\n", i);
            sum += i;
        }
    }
    return sum;
}

int main(int argc, char *argv[]){
    int sum = sum_primes(100);
    printf("%d\n", sum);
    return 0;
}
