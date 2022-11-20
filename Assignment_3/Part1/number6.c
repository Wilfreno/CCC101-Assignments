#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    int m,
        n,
        p,
        j = 5,
        k = 2;

    n = j - ++k;
    m = j-- + k--;
    p = k + j;


    printf("%d \n%d \n%d \n",n, m, p );
    return EXIT_SUCCESS;
}