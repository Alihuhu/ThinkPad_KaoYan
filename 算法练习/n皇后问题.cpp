//ö��+����
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
        bool flag=true;
        for(int i=1; i<=n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                if(abs(i-j)==abs(P[i]-P[j]))
                {
                    flag=false;
                }
            }
        }
        if(flag)
            count++;
        return ;
    }
    for(int x=1; x<=n; x++)
    {
        if(hashTable[x]==false)
        {
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
