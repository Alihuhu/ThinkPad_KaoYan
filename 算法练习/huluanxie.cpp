#include<cstdio>
int P[10];
bool hashTable[10]={false};
void generateP(int index,int n){
    if(index == n+1)
    {
        for(int i=1;i<=n;i++)
        {
            printf("%d",P[i]);
        }
        printf("\n");
        return ;
    }
    for(int x=1;x<=n;x++)
    {
        if(hashTable[x] == false){
            P[index]=x;
            hashTable[x]=true;
            generateP(index+1,n);
            hashTable[x]==false;
        }
    }
}
int main(){
    int n=3;
    generateP(1,n);
    return 0;
}
