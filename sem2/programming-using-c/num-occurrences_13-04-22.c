// Number of occurrences of a number n in another number, m.
// For example, 44 has 3 occurrences in 4444

#include <stdio.h>
#include <math.h>

int num_of_digits(long num);

int main(){
    long num, key, freq = 0;
    printf("Enter the number to search within: ");
    scanf("%ld", &num);
    printf("Enter the search key: ");
    scanf("%ld", &key);

    int key_len = num_of_digits(key);
    long factor = (long)pow(10, key_len);

    while(num / (factor / 10) != 0){
        freq += (num % factor == key);
        num /= 10;
    }
    printf("%ld occurs %ld times in the number.\n", key, freq);
}

int num_of_digits(long num){
    int count = 0;
    for(;num != 0; num /= 10, count++);
    return count;
}
