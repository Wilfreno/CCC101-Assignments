#include <stdio.h>

#define CENTIMETER_PER_INCH 0.3937

void converter(int min, int max);


int main (int argc, char *argv[]) {

    int maximun,
        minimum;

    printf("Enter the minimum number: ");
    scanf("%d", &minimum);

    printf("Enter the maximum value: ");
    scanf("%d", &maximun);

    converter(minimum, maximun);


    return 0;
}

void converter(int min, int max) {

    for (int i = min; i < max; i+=10)
    {
        printf("%0.4f\n", i * CENTIMETER_PER_INCH);
    }
    

}