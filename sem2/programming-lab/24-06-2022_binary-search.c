#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = * b;
    *b = temp;
}

void sort(int* arr, int size){
    for(int i = 1; i < size; i++){
        int j = i;
        while(j != 0 && arr[j] < arr[j - 1]){
            swap(arr + j, arr + j - 1);
            j--;
        }
    }
}

int binary_search(int* arr, int size, int key){
    sort(arr, size);
    int low = 0, high = size - 1;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == key){
            if(arr[mid - 1] == key && mid != 0){
                high = mid - 1;
                continue;
            } 
            return mid;
        } else if(arr[mid] < key){
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
    return -1;
}

void print_arr(int* arr, int size){
    for(int i = 0; i < size; i++)
        printf("%d\t", arr[i]);
    printf("\n");
}

int main(int argc, char** argv){
    int size = argc - 1;
    int arr[size];
    for(int i = 1; i < argc; i++){
        arr[i - 1] = atoi(*(argv + i));
    }
    int key;
    printf("Enter the key to search for: ");
    scanf("%d", &key);
    int idx = binary_search(arr, size, key);
    print_arr(arr, size);
    if(idx == -1){
        printf("%d not found in array.\n", key);
    } else {
        printf("%d found at index %d and position %d in array.\n", key, idx, idx + 1);
    }
}
