#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char** argv){
    if(argc != 2){
        fprintf(stderr, "Usage:\n vowel-search <string to search in>\n");
        exit(1);
    }
    int occurrences[5] = {0, 0, 0, 0, 0};
    char* string = *(argv+1);
    char* vowels = "aeiou";
    while(*string != '\0'){
        char ch = tolower(*string);
        if(strchr(vowels, ch) != NULL){
            printf("%c found.", ch);
            int idx = (int)(strchr(vowels, ch) - vowels);
            printf(" | index:  %d\n", idx);
            occurrences[idx]++;
        }
        string++;
    }

    for(int i = 0; i < 5; i++){
        if(occurrences[i] == 0) continue;
        printf("%c: %d\n", vowels[i], occurrences[i]);
    }
}
