#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<malloc.h>
using namespace std;

const int maxvex = 100;
const int infinity = 65535;   //�����
bool visited[maxvex] = {0};

void initvisited()
{
    for(int i = 0; i < maxvex; i++)
        visited[i] = 0;
}



//-------------�ڽӾ���-------------------------------
struct GraphMatrix{
    char vexs[maxvex];
    int arc[maxvex][maxvex];//�ڽӾ��󣬣����
    int numvertexes, numedges;
};


void createGraph_Matrix(GraphMatrix * g)
{
    int i, j, k, w;
    cout<<"�����붥�����ͱ�����";
    cin>>g->numvertexes>>g->numedges;

    cout<<"�����붥��:"<<endl;

    for(i = 0; i < g->numvertexes; i++)
    {
        cin>>g->vexs[i];
    }
    //--------��ʼ���ڽӾ���-----------------------
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
        cout<<"����ߣ�vi, vj�����±�i,j ��Ȩw��";
        cin>>i>>j>>w;
        g->arc[i][j] = w;//ȷ���ߺ�Ȩֵ
        g->arc[j][i] = g->arc[i][j];//��Ȩ����ͼ������Գƣ�
    }
}



//--------------�ڽӾ�������ѱ���------------------------------
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



//-------------�ڽ�����-------------------------------------------

//�߱���
struct EdgeNode{
    int adjvex; //�ڽӵ��򣬴���ö����Ӧ���±�
    int weight; //Ȩֵ
    struct EdgeNode * next;
};
//�������
struct VertexNode{
    char data;
    EdgeNode * firstedge;
};

struct GraphAdjList{
    VertexNode vertex[maxvex];
    int numvertexes, numedges;
};

//����ͼ���ڽӱ�ṹ
void createALGraph(GraphAdjList * g)
{
    int i, j, k;
    EdgeNode * e;
    cout<<"���붥�����ͱ�����";
    cin>> g->numvertexes>> g->numedges;

    for(i = 0; i < g->numvertexes; i++)
    {
        cout<<"���붥��.data";
        cin>>g->vertex[i].data;
        g->vertex[i].firstedge = NULL;
    }

    for(k = 0; k < g->numedges; k++)//�����߱�
    {
        cout<<"����ߣ�vi, vj���ϵĶ������";
        cin>>i >>j;

        e = (EdgeNode * )malloc(sizeof(EdgeNode));
        e -> adjvex = j;
        printf("#####%p\n\n\n\n ", g->vertex[i].firstedge);
        e -> next = g->vertex[i].firstedge;  //ͷ��
        g -> vertex[i].firstedge = e;

     //-------��ֵ���Σ���������----------------------

        e = (EdgeNode * )malloc(sizeof(EdgeNode));
        e ->adjvex = i;
        e->next = g->vertex[j].firstedge;  //ͷ��
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
    cout<<"�ڽӾ�����ͼ�������ѱ���"<<endl;
    GraphMatrix g1;
    createGraph_Matrix(&g1);
    dfstraverse_1(g1);

    cout<<endl;

    cout<<"�ڽ�������ͼ�������ѱ���"<<endl;
    GraphAdjList g2;
    createALGraph(&g2);
    dfstraverse_2(g2);

    return 0;
}
