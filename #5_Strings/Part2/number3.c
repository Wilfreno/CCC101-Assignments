#include <stdio.h>
#include <string.h>

//store in ssn2 the middle three-digit portion of socsec
int main (int argc, char *argv[]) {
    
    char socsec[12] = "123-456-789"; 
    char ssn2[4]; 

    strncpy(ssn2, &socsec[4],3);

    printf("%s\n", ssn2);

    return 0;
}