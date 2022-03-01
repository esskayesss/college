#include <stdio.h>
#include <ctype.h>

void is_vowel_switch(char ch){
    printf("Entered switch vowel check...\n");
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Entered character %c is a vowel.\n", ch);
            break;
        default: 
            printf("Entered character %c is a consonant.\n", ch);
            break;
    }
}

void is_vowel_if(char ch){
    printf("Entered if vowel check...\n");
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        printf("Entered character %c is a vowel.\n", ch);
    } else{
        printf("Entered character %c is a consonant.\n", ch);
    }
}

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    ch = tolower(ch);
    
    is_vowel_switch(ch);
    is_vowel_if(ch);
}
