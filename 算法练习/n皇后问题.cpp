//枚举+暴力
#include<cstdio>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int count=0;

int P[100];
bool hashTable[100]= {false};
int n=8;
//回溯法解决n皇后问题
void generateP(int index)
{
    if(index==n+1){
        count++;
        return ;
    }
    for(int x=1;x<=n;x++){
        if(hashTable[x]==false){
            bool flag=true;
            for(int pre=1;pre<index;pre++){
                if(abs(index-pre)==abs(x-P[pre])){
                    flag=false;
                    break;
                }
            }
            if(flag){
                P[index]=x;
                hashTable[x]=true;
                generateP(index+1);
                hashTable[x]=false;
            }
        }
    }
}
/*void generateP(int index)
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
}*/

int main()
{
    clock_t start,finish;
    start = clock();
    generateP(1);
    printf("%d\n",count);
    finish =clock();
    float time = (float)(finish-start)/CLOCKS_PER_SEC;
    printf("%f\n",time);
}
