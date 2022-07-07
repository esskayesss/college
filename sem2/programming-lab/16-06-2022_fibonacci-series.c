#include <stdio.h>
#include <stdlib.h>

void fibonacci_series(int count)
{
    int i, a = 0, b = 1, c;
    for (i = 0; i < count - 1; i++)
    {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d\n", a);
}

int main(int argc, char** argv){
    if(argc != 2){
        printf("Usage: %s <count>\n", argv[0]);
        return 0;
    }
    int count = atoi(argv[1]);
    fibonacci_series(count);
}
