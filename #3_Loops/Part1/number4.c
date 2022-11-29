#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
 
    int j, i = 10;

    
    for(j=i; j<= 5; ++j){
    
        printf("%d %d \n", i, j);
        i -= 2;

    }

 
    return EXIT_SUCCESS;
}