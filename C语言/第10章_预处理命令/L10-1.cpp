#include<stdio.h>
#define SQRT(x) ((x)*(x))
#define MAX(x,y) ((x)>(y)?(x):(y))
int main()
{
    float a=-2.5,b=-3.2;
    a=MAX(a,b)+3;
    printf("%f\n",SQRT(a));
}