#include <stdio.h>

int do_inf(){
    do{
        printf("DO-WHILE LOOP");
        continue;
    } while(0);
    return 0;
}

int while_inf(){
    while(1){
        printf("WHILE LOOP");
    }
    return 0;
}

int for_inf(){
    for(;;){
        printf("FOR LOOP");
    }
    return 0;
}

int main(){
    do_inf();
    while_inf();
    for_inf();
}
