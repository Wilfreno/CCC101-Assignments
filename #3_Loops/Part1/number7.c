#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
 
    printf(" i j\n");

    for(int i=1; i<4; ++i){
            printf("Outer %3d\n",i);
            for(j=0; j<i; ++j){
                    printf("Inner %11d\n",j);
                }
}
 
    return EXIT_SUCCESS;
}