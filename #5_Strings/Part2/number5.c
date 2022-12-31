
#include<stdio.h>
int main() {
 	char s1[] = "Programming in C", s2[5],
 	s3[5];
 	strncpy(s2,&s1[3],1);
 	s2[1] = '\0';
 	strncpy(s3, &s1[5],2);
    s3[2] = '\0';
 	 strcat(s2, strcat(s3,"e"));
 	printf ("%s is a %s\n", s1, s2);
}
