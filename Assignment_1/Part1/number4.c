#include <stdio.h>

int main () {
    int num1; 
    int result; 

 

    printf("This programm will double the integer input and subtract it with ten then displays the result \nPlease input an integer: "); 

    scanf("%d", &num1); 

 

    result = (num1 * 2) - 10; 

    printf("The result is %d", result); 

 
    return 0;
}