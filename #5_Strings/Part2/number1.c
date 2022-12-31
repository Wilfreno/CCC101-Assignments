#include <stdio.h>
#include <string.h>

//store in ssnshort as much of socsec will fit 
int main (int argc, char *argv[]) {

    char socsec[12] = "123-456-789"; 
    char ssnshort[7], ssn1[4], ssn2[3], ssn3[5]; 


    strncpy(ssnshort,socsec, 6);

    printf("%s\n", ssnshort);
    return 0;
}