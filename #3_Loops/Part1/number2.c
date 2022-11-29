#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
 
    int product, x, count;

    printf("Enter an integer>");
    scanf("%d", &x);
    product = x;
    count = 0;
    while(count < 4){
    
        printf("%d\n", product);
        product *= x;
        count += 1;
    }

    return EXIT_SUCCESS;
}