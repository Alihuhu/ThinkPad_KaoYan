#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int MAXV=510;
const int INF=100000000;
int n,m,st,ed,G[MAXV][MAXV],weight[MAXV];
int d[MAXV],w[MAXV],num[MAXV];
void Dijkstra(int s){
    fill(d,d+MAXV,INF);
    memset(num,0,sizeof(num));
    memset(w,0,sizeof(w));
    d[s]=0;
    w[s]=weight[s];
    num[s]=1;
    for(int i=0;i<n;i++)
    {
        int u=-1;MIN=INF;
        for(int j=0;j<n;j++)
        {
            if(vis[j])
        }
    }
}
