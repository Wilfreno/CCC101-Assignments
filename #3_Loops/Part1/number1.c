#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    
    int i = 0;
    
    while (i <=5){
    
        printf("%3d, %3d\n", i, i-10);
        i = i + 1;
    
    }

 
 
    return EXIT_SUCCESS;
}