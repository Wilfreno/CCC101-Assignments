#include <stdio.h>

#define SECONDS_PER_MINUTE 60
#define MINUTE_PER_HOURS 60
#define HOURS_PER_DAY 24
#define DAYS_PER_YEAR 365

int main () {
    
    int age, ageInSeconds;

    printf("This program will display your age converted into seconds. \n Enter you age: ");
    scanf("%d", &age);

    ageInSeconds = age * SECONDS_PER_MINUTE * MINUTE_PER_HOURS * HOURS_PER_DAY * DAYS_PER_YEAR;
    
    printf("Your age in converted into seconds is %ds", ageInSeconds);
    return 0;
}