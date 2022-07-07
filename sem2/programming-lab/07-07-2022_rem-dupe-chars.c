#include <stdio.h>
#include <string.h>
#include <ctype.h>

void rem_dupes(char* str){
    char alpha[26];
    for(int i = 0; i < 26; i++)
        alpha[i] = 0;

    char slim[strlen(str)];
    int idx = 0;
    for(int i = 0; i < strlen(str); i++){
        char ch = tolower(str[i]);
        if(alpha[ch - 'a']++ == 0)
            slim[idx++] = str[i];
    }
    strcpy(str, slim);
}

int main(int argc, char** argv){
    char* str = *(argv + 1);
    rem_dupes(str);
    printf("%s\n", str);
}
