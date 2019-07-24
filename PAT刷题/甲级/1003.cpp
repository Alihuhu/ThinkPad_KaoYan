#include<bits/bits/stdc++.h>
using namespace std;
struct Road{
    int v;
    int length;
    Road(int vv=0;int l=0):v(vv),length(l){}
};
vector<vector<Road> >graph(505);
int city[505],dis[505],pathNum[505],teamNum[505];
bool visit[505];
int N,M,C1,C2;
void Dijkstra(){
    while(!visit[C2]){
        int MIN=INT_MAX,v=-1;
        for(int i=0;i<N;++i)
        {
            if(!visit[i]&&dis[i]<MIN){
                MIN=dis[i];
                v=i;
            }
        }
        visit[v]=true;
        for(Road r:graph[v]){
            if(!visit[r.v])&&dis[r.v]>dis
        }
    }
}
