#include <stdio.h>
#include <stdlib.h>


int fun1(int a, int b, int c);
int fun2(int a, int b);


int main (int argc, char *argv[]) {

    // printf("%d", fun2(fun1(1,2,3)));
    printf("%d", fun1(4,5,6));

    return EXIT_SUCCESS;
}

int fun1(int a, int b, int c){

    if ((a >= b) && (a >= c)){
        return a;
    }
    else if ((b >= a) && (b >= c)){
        return b;
    }
    else {
        return c;
    }
}

int fun2(int a, int b) {

    if (a < b){
        return a;
    }
    else{
        return b;
    }
}
