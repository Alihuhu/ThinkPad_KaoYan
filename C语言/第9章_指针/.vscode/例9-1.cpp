#include <stdio.h>
int main()
{
    unsigned short a;
    unsigned short *pi=&a;
    char *pc=(char *)&a+1;
    *pi=0XF0F0;
    *pc=0;
    printf("a=%X",a);
}