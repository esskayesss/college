#include <stdio.h>
#include <stdlib.h>

int summate_arr(int* arr){
    int sum = 0;
    while(*(arr) != '\0') sum += *(arr++);
    return sum;
}

int main(){
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    int* arr = (int*)malloc((num + 1)*sizeof(int));

    for(int i = 0; i < num; i++)
        scanf("%d", arr + i);
    *(arr + num) = '\0';

    printf("Sum of elements of the array is %d.\n", summate_arr(arr));
}
