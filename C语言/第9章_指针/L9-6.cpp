#include <stdio.h>
int main()
{
    char *pstr="I love China!";
    for(;*pstr !='\0';pstr++)
        printf("%c",*pstr);
        printf("\n");
}