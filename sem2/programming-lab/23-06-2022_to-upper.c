#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char* c = *(argv + 1);
    while(*c != '\0')
        if (isalpha(c))
            putchar(toupper(c));
        else
            putchar(c);
    return 0;
}
