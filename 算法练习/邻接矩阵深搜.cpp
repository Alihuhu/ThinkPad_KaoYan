#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<malloc.h>
using namespace std;

const int maxvex = 100;
const int infinity = 65535;   //无穷大
bool visited[maxvex] = {0};

void initvisited()
{
    for(int i = 0; i < maxvex; i++)
        visited[i] = 0;
}



//-------------邻接矩阵-------------------------------
struct GraphMatrix{
    char vexs[maxvex];
    int arc[maxvex][maxvex];//邻接矩阵，（打表）
    int numvertexes, numedges;
};


void createGraph_Matrix(GraphMatrix * g)
{
    int i, j, k, w;
    cout<<"请输入顶点数和边数：";
    cin>>g->numvertexes>>g->numedges;

    cout<<"请输入顶点:"<<endl;

    for(i = 0; i < g->numvertexes; i++)
    {
        cin>>g->vexs[i];
    }
    //--------初始化邻接矩阵-----------------------
    for(i = 0; i < g->numvertexes; i++)
    {
        for(j = 0; j < g->numvertexes;j++)
        {
            g->arc[i][j] = infinity;
        }
    }
    //---------------------------------------------------

    for(k = 0; k < g->numedges; k++)
    {
        cout<<"输入边（vi, vj）的下标i,j 和权w：";
        cin>>i>>j>>w;
        g->arc[i][j] = w;//确定边和权值
        g->arc[j][i] = g->arc[i][j];//带权无向图，矩阵对称；
    }
}



//--------------邻接矩阵的深搜遍历------------------------------
void dfs_1(GraphMatrix  g, int i)
{
    int j;
    visited[i] = 1;
    printf("%c ", g.vexs[i]);
    for(j = 0; j < g.numvertexes; j++)
    {
        if(g.arc[i][j] == 1 && visited[j] == 0)
            dfs_1(g, j);
    }
}

void dfstraverse_1(GraphMatrix g)
{
    initvisited();
    int i;
    for(i = 0; i < g.numvertexes; i++)
    {
        if(!visited[i])  dfs_1(g, i);
    }
}


//-----------------------------------------------------------------



//-------------邻接链表-------------------------------------------

//边表结点
struct EdgeNode{
    int adjvex; //邻接点域，储存该顶点对应的下标
    int weight; //权值
    struct EdgeNode * next;
};
//顶点表结点
struct VertexNode{
    char data;
    EdgeNode * firstedge;
};

struct GraphAdjList{
    VertexNode vertex[maxvex];
    int numvertexes, numedges;
};

//建立图的邻接表结构
void createALGraph(GraphAdjList * g)
{
    int i, j, k;
    EdgeNode * e;
    cout<<"输入顶点数和边数：";
    cin>> g->numvertexes>> g->numedges;

    for(i = 0; i < g->numvertexes; i++)
    {
        cout<<"输入顶点.data";
        cin>>g->vertex[i].data;
        g->vertex[i].firstedge = NULL;
    }

    for(k = 0; k < g->numedges; k++)//建立边表
    {
        cout<<"输入边（vi, vj）上的顶点序号";
        cin>>i >>j;

        e = (EdgeNode * )malloc(sizeof(EdgeNode));
        e -> adjvex = j;
        printf("#####%p\n\n\n\n ", g->vertex[i].firstedge);
        e -> next = g->vertex[i].firstedge;  //头插
        g -> vertex[i].firstedge = e;

     //-------赋值两次，两点链接----------------------

        e = (EdgeNode * )malloc(sizeof(EdgeNode));
        e ->adjvex = i;
        e->next = g->vertex[j].firstedge;  //头插
        g->vertex[j].firstedge = e;
    }
}


void dfs_2(GraphAdjList g, int i)
{
    EdgeNode *p;
    visited[i] = 1;
    cout<<g.vertex[i].data<<" ";
    p = g.vertex[i].firstedge;
    while(p != NULL)
    {
        if(!visited[p->adjvex])
            dfs_2(g, p->adjvex);
        p = p->next;
    }
}

void dfstraverse_2(GraphAdjList g)
{
    int i = 0;

    initvisited();

    for(i = 0; i < g.numvertexes; i++)
    {
        if(!visited[i]) dfs_2(g, i);
    }
}
//------------------------------------------------------------

int main()
{
    cout<<"邻接矩阵建立图，并深搜遍历"<<endl;
    GraphMatrix g1;
    createGraph_Matrix(&g1);
    dfstraverse_1(g1);

    cout<<endl;

    cout<<"邻接链表建立图，并深搜遍历"<<endl;
    GraphAdjList g2;
    createALGraph(&g2);
    dfstraverse_2(g2);

    return 0;
}
