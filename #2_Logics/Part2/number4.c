#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
 
    int SBP;

    printf("Please input your Systolic Blood Pressure (SBP): ");
    scanf("%d", &SBP);

    if (SBP >= 140)
    {
        printf("You have a Hypertension");
    }
    else if (SBP >=120 && SBP <= 139)
    {
        printf("You have Prehypertension");
    }
    else if (SBP < 120 )
    {
        printf(" You're in normal state");
    }
    
    
    
 
    return EXIT_SUCCESS;
}