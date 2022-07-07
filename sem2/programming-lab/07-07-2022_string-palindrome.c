#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strrev(char* str){
    int len = strlen(str);
    for(int i = 0; i < len/2; i++){
        char tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }
}

int is_palindrome(char* str){
    int len = strlen(str);
    char copy[len];
    strcpy(copy, str);
    strrev(copy);
    return strcmp(str, copy) == 0;
}

int main(int argc, char** argv){
    char *str = *(argv + 1);
    if(is_palindrome(str)){
        printf("%s is a palindrome string.\n", str);
    }
}
