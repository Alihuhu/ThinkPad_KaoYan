#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int sum=a+b;
    if(sum<0)
    {
        printf("-");
        sum=-sum;
    }
    if(sum<1000&&sum>-1000)
        printf("%d\n",sum);
    else{
        string s=to_string(sum);
        int i=s.size()%3;
        if(i==0)i=3;
            cout<<s.substr(0,i);
        for(;i<s.size();i+=3)
            cout<<","<<s.substr(i,3);
    }
}
