#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
 
    int x,
        y;

    printf("Input number: ");
    scanf("%d", &x);

    printf("Second: ");
    scanf("%d", &y);


    if (x > y )
    {
        if ((x - y) < 0)
        {
            y = -(x - y);

            printf("%d", y);
        }
        else {
            y = x - y;
            printf("%d", y);

        }
    }
    else if(y > x) {

            if ((y - x) < 0)
            {
                y = -(x - y);
                printf("%d", y);

            }
            else {
        
                y = y - x;
              printf("%d", y);
      
            }
            


    }
    
    return EXIT_SUCCESS;
}