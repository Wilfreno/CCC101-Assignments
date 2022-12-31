#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mysteryFun(char str[]);

int main () {

    char str[] =
    {
        'a','l','p','h','a','b','e'
        ,'t','i','c'
    };
    
    mysteryFun(str);

    return EXIT_SUCCESS;
}

void mysteryFun(char str[]) {

    char *p1, *p2;
    char temp;
    p1 = str;
    p2 = str + 9;

    int len = strlen(p1);

    printf("Len: %d", len);
    for (int i = 1; i < 15; i++)
    {

        printf("p1: %s\n", p1 + i);
    }
    
    // while (p2 > p1)
    // {
    //     temp = *p1;
    //     *p1 = *p2;
    //     *p2 = temp;
    //     p1 = p1 + 2;
    //     p2 = p2 - 2;

    // }
    // printf("%s\n", str);
}

