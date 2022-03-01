#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    ch = tolower(ch);
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
