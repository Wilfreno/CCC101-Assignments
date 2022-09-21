#include <stdio.h>

int main () {

    int firstNumber; 
    int secondNumber;
    int thirdNumber;

    printf("Please type \"THREE INTEGERS\" \nType the first one: ");
    scanf("%d", &firstNumber);

    printf("Type the second one: ");
    scanf("%d", &secondNumber);

    printf("Type the last one: ");
    scanf("%d", &thirdNumber);

    printf("The first integer you give is %d \nThe second one is %d \nAnd the third one is %d \n", firstNumber, secondNumber, thirdNumber);



    return 0;
}