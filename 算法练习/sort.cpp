#include<stdio.h>
int A[10]={5,2,4,3,7,8,9,1,6,0};
int B[10]={5,2,4,3,7,8,9,1,6,0};
int n=10;
//—°‘Ò≈≈–Ú
void selectSort(){
    for(int i=0;i<=n-1;i++)
    {
        int k=i;
        for(int j=i;j<=n-1;j++)
        {
            if(A[j]<A[k]){
                k=j;
            }
        }
        if(i!=k){
            int temp=A[i];
            A[i]=A[k];
            A[k]=temp;
        }
    }
}
int main()
{
    selectSort();
    for(int i=0;i<10;i++)
        printf("%d ",A[i]);
}
