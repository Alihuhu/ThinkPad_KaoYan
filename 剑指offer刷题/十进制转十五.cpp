#include<stdio.h>
#include<stack>
#include<cmath>
using namespace std;
void Print(int n)
{
    if(n>=0&&n<=9) printf("%d",n);
    else printf("%c",'A'+(n%10));
}
int main()
{
    int num,a;
    stack<int> result;
    scanf("%d",&num);
    if(num==0)
    {
        printf("0");
        return 0;
    }
    a=abs(num);
    while(a>0)
    {
        int b=a%15;
        result.push(b);
        a=a/15;
    }
    if(num<0) printf("-");
    while(!result.empty())
    {
        Print(result.top());
        result.pop();
    }
    return 0;
}
