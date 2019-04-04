#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<iostream>
using namespace std;
void aha(int a)
{
    switch(a){
        case 1:printf("yi");break;
        case 2:printf("er");break;
        case 3:printf("san");break;
        case 4:printf("si");break;
        case 5:printf("wu");break;
        case 6:printf("liu");break;
        case 7:printf("qi");break;
        case 8:printf("ba");break;
        case 9:printf("jiu");break;
        case 0:printf("ling");break;
    }
}
int main()
{
    string a;
    int num=0;
    cin>>a;
    for(int i=0;i<a.length();i++)
    {
        int b=a[i]-'0';
        num+=b;
    }
    string sum =  to_string(num);
    for(int i=0;i<sum.length();i++)
    {
        int h=sum[i]-'0';
        if(i!=0)printf(" ");
        aha(h);
    }
}
