#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main (int argc, char *argv[]) {
 
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);

    printf("%d", factorial(num));
 
    return EXIT_SUCCESS;
}

int factorial(int n){

    int result = 1;
    int num = n;

    for (int i = 0; i < n; i++)
    {
        result = result * num--; 
    }
    
    return result;

}
