#include <stdio.h>

int main(){
    const char *in_words[10] = {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};

    printf("Enter the number to be printed in digitwise-words: ");
    char ch;

    while((ch = getchar()) != EOF && ch != '\n')
        printf("%s ", in_words[ch - '0']);
    
    printf("\n");
}
