#include <stdio.h>

int main(){
    for(int i = 2; i <= 100; i++){
        if(i % 6 != 0) printf("%d\n", i);
    }
}
