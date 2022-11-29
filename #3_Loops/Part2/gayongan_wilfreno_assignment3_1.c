#include <stdio.h>
#include <math.h>


int main (int argc, char *argv[]) {
 
    for (int i = 0; i <= 4; i++)
    {
        int num = pow(2 ,i);
        printf("%d %d\n", i, num);
    }
    return 0;
}