#include <stdio.h>

int is_leap(int year){
    if(year % 100 == 0){
        if(year % 400 == 0) return 1;
    }
    return year % 4 == 0;
}

int main(){
    for(int i = 2000; i <= 2100; i++)
        if(is_leap(i)) printf("%d\n", i);
}
