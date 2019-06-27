//回溯法求n皇后
#include<cstdio>
#include<math.h>
#include<stdlib.h>
int count=0;
int P[100];
bool hashTable[100]= {false};
int n=8;
void generateP(int index)
{
    if(index==n+1)
    {
        count++;
        return ;
    }
    for(int x=1; x<=n; x++)
    {
        if(hashTable[x]==false)
        {
            bool flag=true;

                for(int pre=1; pre<index; pre++)
                {
                    if(abs(i)==abs(P[i]-P[j]))
                    {
                        flag=false;
                    }
                }

            if(flag)
                P[index]=x;
            hashTable[x]=true;
            generateP(index+1);
            hashTable[x]=false;
        }
    }
}

int main()
{
    generateP(1);
    printf("%d\n",count);
}
