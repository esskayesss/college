#include <stdio.h>
#include <stdlib.h>

void print_array(int* arr){
    while(*arr != '\0')
        printf("%d\n", *(arr++));
}

int main(){
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    int* arr = (int*)malloc((num + 1)*sizeof(int));

    for(int i = 0; i < num; i++){
        scanf("%d", arr + i);
    }

    *(arr + num) = '\0';

    print_array(arr);
}
