#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    
    int pH;

    if (pH > 7)
    {
        if (pH < 12)
        {
            printf("Alkaline");
        }
        else{
            printf("Very Alkaline");
        }
    }else {

        if (pH == 7)
        {
            printf("Neutral");
        }
        else if (pH > 2)
        {
            printf("Acidic");
        }
        else{
            printf("Very Acidic");
        }
        
        
    }
    
    return EXIT_SUCCESS;
}