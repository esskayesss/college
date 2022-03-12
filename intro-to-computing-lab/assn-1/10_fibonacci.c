#include <stdio.h>

int main(){
    int key, t1 = 0, t2 = 1, term = 0;
    printf("Enter the key to search for in the fibonacci pattern: ");
    scanf("%d", &key);
    if(key < 0){
        printf("%d is not present in the fibonacci series.\n", key);
        return 0;
    }
    while(term < key){
        term = t1 + t2;
        t1 = t2;
        t2 = term;
    }
    if(term == key) printf("%d is found in the fibonacci series.\n", key);
    else printf("%d is not in the fibonacci series.\n", key);
}
