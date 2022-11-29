#include <stdio.h>



void oddNumbers(int min, int max);
void evenNumbers(int min, int max);


int main () {

    int minimum,
        maximum,
        display;


    printf("Please input a minimum and maximum number. \nMinimum number: ");
    scanf("%d", &minimum);

    printf("Maximum number: ");
    scanf("%d", &maximum);
    

    printf("Enter (1) to display the \"ODD\" numbers or enter (2) to display the \"EVEN\" numbers. \nDisplay \"ODD\" or \"EVEN\"?:");
    scanf("%d", &display);
        
    while(display != 1 && display != 2){

        printf("Please enter a valid input. \n \"ODD\" or \"EVEN\"?: ");
        scanf("%d", &display);
    }
        
    if(display == 1) {

        oddNumbers(minimum, maximum);
    }
    else if (display == 2)
    {
        evenNumbers(minimum, maximum);

    }
    
    return 0;
}

void oddNumbers(int min, int max){

    for(int i = min; i < max; i++){

        if ((i % 2) == 1)
        {
            printf("%d\n", i);
        }

    }

}

void evenNumbers(int min, int max) {

    for(int i = min; i < max; i++){

        if ((i % 2) == 0)
        {
            printf("%d\n", i);
        }
    }

}