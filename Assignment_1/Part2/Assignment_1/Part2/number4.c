#include <stdio.h>


int main () {
    
    int num1, num2, numContainer;

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("Enter another number: ");
    scanf("%d", &num2);

    numContainer = num2;

    num2 = num1;
    num1 = numContainer;

    printf("%d \n%d", num1, num2);
    
    return 0;
}