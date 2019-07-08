//G为图，一般设成全局变量；数组d为源点到各点的最短路径长度，s为起点
Dijkstra(G,d[],s){
	初始化；
	for(循环n次)
    {
        u=使d[u]最小的未被访问的顶点的标号;
        记u已被访问;
        for(从u出发能到达的顶点v){
            if(v未被访问&&以u为中介点使s到顶点v的最短距离d[v]更优){
                优化d[v];
            }
        }
    }
}

struct Node{
    int v,dis;
};
vector<Node> Adj[MAXN];
int n;
int d[MAXV];
bool vis[MAXN]={false};
void Dijkstra(int s){
    fill(d,d+MAXV,INF);
    d[s]=0;
    for(int i=0;i<n;i++){
        int u=-1,MIN=INF;
        for(int j=0;j<n;j++){
            if(vis[j]==false&&d[j]<MIN)
            {
                u=j;
                MIN=d[j];
            }
        }
    }
    if(u==-1) return ;
    vis[u]=true;
    for(int j=0;j<Adj[u].size();j++)
    {
        int v=Adj[u][j].v;
        if(vis[v]==false&&du[u]+Adj[u][j].dis<d[v]){
            d[v]=Adj[u][j].dis;
        }
    }
}












