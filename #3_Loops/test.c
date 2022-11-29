#include <stdio.h>

int main (int argc, char *argv[]) {
 
    int i = 1;

    for(i++; i++; i++){

        printf("%d \n", i);

        if(i == 6) 
            break;
    }

    return 0;
}