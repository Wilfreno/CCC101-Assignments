#include <stdio.h>

#define FIRST_PLACE_POINTS 5
#define SECOND_PLACE_POINTS 3
#define THIRD_PLACE_POINTS 1
int main () {

    int num1, num2, num3, totalPoints;

    printf("This program will give the drivers total points accumulated during the race. \nEnter the number of times he placed first: ");
    scanf("%d", &num1);

    printf("Enter the number of times he placed second: ");
    scanf("%d", &num2);

    printf("Enter the number of times he placed third: ");
    scanf("%d", &num3);

    totalPoints = (num1 * FIRST_PLACE_POINTS) + (num2 * SECOND_PLACE_POINTS) + (num3 * THIRD_PLACE_POINTS);

    printf("The drivers total points is %d", totalPoints);

    return 0;
}