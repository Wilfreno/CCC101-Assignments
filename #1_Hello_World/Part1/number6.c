#include <stdio.h>

int main () {

    double  x, y, z, average;


    printf("This program will accept three numbers and print out its average value. \nPlease enter the first value: ");
    scanf("%lf", &x);

    printf("Enter the second value: ");
    scanf("%lf", &y);

    printf("Enter the third value: ");
    scanf("%lf", &z);
    
    average = (x + y + z) / 3;
    printf("The average value is %f", average);

    return 0;
}