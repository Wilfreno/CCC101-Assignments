#include<stdio.h>
void mysteryFun(char str[])
{
    char *p1, *p2;
    char temp;
    p1 = str;
    p2 = str + 9;
    while (p2 > p1)
    {
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1 = p1 + 2;
        p2 = p2 - 2;
    }
    printf("%s\n", str);
}
int main(void)
{
    char str[] = "alphabetic";
    mysteryFun(str);
    return 0;
}
