#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_triangle(int n) {
    int i, j;
    int *triangle = (int *)malloc(sizeof(int) * n * n);
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i * n + j] = 1;
            } else {
                triangle[i * n + j] = triangle[(i - 1) * n + j] + triangle[(i - 1) * n + j - 1];
            }
        }
    }

    int width = (int)(log10(triangle[(n-1) * n + n/2])) + 1;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%*d ", width, triangle[i * n + j]);
        }
        printf("\n");
    }

    free(triangle);
}

int main(int argc, char** argv){
    int n = atoi(argv[1]);
    print_triangle(n);
    return 0;
}
