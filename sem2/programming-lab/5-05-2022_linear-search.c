#include <stdio.h>
#include <stdlib.h>

int linear_search(int* arr, int key){
    int* cursor = arr;
    while(*cursor != '\0'){
        if(*(cursor) == key) return cursor - arr;
        cursor++;
    }
    return -1;
}

int main(){
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    int* arr = (int*)malloc((num + 1)*sizeof(int));
    int key;

    printf("Enter the key to search for: ");
    scanf("%d", &key);

    for(int i = 0; i < num; i++){
        scanf("%d", arr + i);
    }
    *(arr + num) = '\0';
    
    int idx = linear_search(arr, key);
    if(idx == -1){
        printf("%d not found in the array.\n", key);
    } else{
        printf("%d found at index %d.\n", key, idx);
    }
}
