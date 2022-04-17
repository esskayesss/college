#include <stdio.h>
#include <ctype.h>

int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    char ch_l = tolower(ch);
    if(!isalpha(ch)){
        printf("Entered character is not an alphabet.\n");
        return 0;
    }
    switch(ch_l){
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
