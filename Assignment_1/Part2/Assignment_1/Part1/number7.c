#include <stdio.h>

#define KW_PER_HOUR_RATE 9.5458
#define SALES_TAX 0.08


int main () {

    double KW_per_hour_used;

    printf("This program will display your electric bill added with the 8 percent sales tax depending on your consumed electricity per killowatt-hours. \nPlease enter your consumed electricity per killowatt-hour: ");
    scanf("%lf", &KW_per_hour_used);

    printf("Your electricity bill is %f Pesos", (KW_per_hour_used * KW_PER_HOUR_RATE) * SALES_TAX);
    return 0;
}