#include <stdio.h>
#include <string.h>
//store in ssn3 the final four digits of socsec.
int main (int argc, char *argv[]) {
    
    char socsec[12] = "123-456-789"; 
 
    char ssn3[5]; 

    strncpy(ssn3, &socsec[7],4);

    printf("%s\n", ssn3);

    return 0;
}