#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
 
    int num;

    do{
    
        printf("enter a number: ");
        scanf("%d", &num);
    
    } while((num < 0) || (num >= 10));

    return EXIT_SUCCESS;
}