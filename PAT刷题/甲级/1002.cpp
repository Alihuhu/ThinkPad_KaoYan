#include<cstdio>
#include<map>
using namespace std;
int main()
{
    int a,b;
    map<int,float,greater<int>> mp;
    map<int,float>::iterator it;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        int c;
        float d=1.0;
        scanf("%d%f",&c,&d);
        mp[c]=d;
    }
    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        int c;
        float d=1.0;
        scanf("%d%f",&c,&d);
        if(mp.find(c)==mp.end()) mp[c]=d;
        else{
            mp[c]+=d;
            if((mp[c]>-1e-6) && (mp[c]<1e-6))
                mp.erase(c);
        }
    }
    printf("%d",mp.size());
    if(mp.size()==0) return 0;
    for(it=mp.begin();it!=mp.end();it++)
    {
        printf(" %d %.1f",it->first,it->second);
    }
}
