#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int n=0;
    while(a!=1)
    {
        n++;
        if(a%2==0) a/=2;
        else a=(a*3+1)/2;
    }
    printf("%d\n",n);
}
