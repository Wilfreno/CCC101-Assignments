#include <stdio.h>

#define PI 3.14159

int main () {
    
    double radius, area;

    printf("This program will the give the area of a circle depending on the radius given by the user. \nEnter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    printf("The era of the cirle is %f", area);
    
    return 0;
}