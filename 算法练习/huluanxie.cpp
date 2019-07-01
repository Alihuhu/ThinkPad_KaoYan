#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string s="abcdefghijklmnopqrst";
        int i=s.size()%3==0?3:s.size()%3;
        cout<<s.substr(0,0);
        for(;i<s.size();i+=3)
            cout<<","<<s.substr(i,3);
}
