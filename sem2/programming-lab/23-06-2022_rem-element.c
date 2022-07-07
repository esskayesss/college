#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* del_element(int* arr, int len, int idx) {
    for (int i = idx; i < len - 1; i++) {
        arr[i] = arr[i + 1];
    }
    int* new_arr = (int*)malloc(sizeof(int)*(len - 1));
    memcpy(new_arr, arr, sizeof(int)*(len - 1));
    return new_arr;
}

int linear_search(int* arr, int len, int key) {
    int i;
    for (i = 0; i < len; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

void print_arr(int* arr, int len){
    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char** argv){
    int len = argc - 2;
    int key = atoi(argv[1]);
    
    int* arr = (int*)malloc(sizeof(int)*(argc - 1));

    for(int i = 0; i < len; i++){
        arr[i] = atoi(argv[i + 2]);
    }

    int idx = linear_search(arr, len, key);
    int p_idx = 0;
    do{
        idx = linear_search(arr + p_idx, len, key);
        if(idx == -1) break;
        idx += p_idx;
        arr = del_element(arr, len, idx);
        len--;
        p_idx = idx;
    } while(1);
    print_arr(arr, len);
}
