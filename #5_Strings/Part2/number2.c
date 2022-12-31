#include <stdio.h>
#include <string.h>

//store in ssn1 the first three characters of socsec
int main () {

    char socsec[12] = "123-456-789"; 
    char ssnshort[7], ssn1[4], ssn2[3], ssn3[5]; 

    strncpy(ssn1, socsec, 3);

    printf("%s\n", ssn1);

    return 0;
}