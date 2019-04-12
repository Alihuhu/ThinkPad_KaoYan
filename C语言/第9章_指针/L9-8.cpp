#include <stdio.h>
#include <string.h>
int main()
{
    char str[200],ch;
    char *p,*q;
    fgets(str,200,stdin);
    p=str;
    q=p+strlen(p) -1;
    while(p<q)
    {
        ch=*p;
        *p++=*q;
        *q--=ch;
    }
    printf("%s\n",str);
}