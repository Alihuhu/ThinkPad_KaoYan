#include<vector>
using namespace std;
vector<int> Adj[N];
Adj[1].push_back(3);
struct Node{
    int v;
    int w;
};
vector<Node> Adj[n];
Node temp;
temp.v=3;
temp.w=4;
Adj[1]=push_back(temp);
struct Node{
    int v,w;
    Node(int _v,int _w):v(_v),w(_w){}
};
Adj[1].push_back(Node(3,4));
const int MAXV=1000;
const int INF=1000000000;
int n,G[MAXV][MAXV];
bool vis[MAXV]={false};
void DFS(int u,int depth){
    vis[u]=true;
    for(int v=0;v<n;v++)
    {
        if(vis[v]==false&&G[u][v]!=INF){
            DFS(v,depth+1);
        }
    }
}
void DFSTrave(){
    for(int u=0;u<n;u++)
    {
        if(vis[u]==false){
            DFS(u,1);
        }
    }
}
vector<int> Adj[MAXV];
int n;
bool vis[MAXV]={false};
void DFS(int u,int depth){
    vis[u]=true;
    for(int i=0;i<Adj[u].size();i++)
    {
        int v=Adj[u][i];
        if(vis[v]==false){
            DFS(v,depth+1);
        }
    }
}
void DFS(){
    for(int u=0;u<n;u++)
    if(vis[u]==false){
        DFS(u,1);
    }
}
int n,G[MAXV][MAXV];
bool inq[MAXV]={false};
void BFS(int u){
    queue<int> q;
    q.push(u);
    inq[u]=true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v=0;v<n;v++)
        {
            if(inq[v]==false&&G[u][v]!=INF){
                q.push(v);
                inq[v]=true;
            }
        }
    }
}
void BFSTrave(){
    for(int u=0;u<n;u++)
    {
        if(inq[u]==false){
            BFS(q);
        }
    }
}
vector<int> Adj[MAXV];
int n;
bool inq[MAXV]={false};
void BFS(int u){
    queue<int> q;
    q.push(u);
    inq[u]=true;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<Adj[u].size();i++)
        {
            int v=Adj[u][i];
            if(inq[u]==false)
            {
                q.push[v];
                inq[v]=true;
            }
        }
    }
}
void BFSTrave(){
    for(int u=0;u<n;u++){
        if(inq[u]==false)
        {
            BFS(q);
        }
    }
}
struct Node{
    int v;
    int layer;
};
vector<Node> Adj[N];
void BFS(int s){
    queue<Node> q;
    Node start;
    start.v=s;
    start.layer=0;
    inq[start.v]=true;
    while(!q.empty()){
        Node topNode=q.front();
        q.pop();
        int u=topNode.v;
        for(int i=0;i<Adj[u].size();i++)
        {
            Node next=Adj[u][i];
            next.layer=topNode.layer+1;
            if(inq[next.v]==false){
                q.push(next);
                inq[next.v]=true;
            }
        }
    }
}






















