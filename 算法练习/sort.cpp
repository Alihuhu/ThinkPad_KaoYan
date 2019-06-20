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
//≤Â»Î≈≈–Ú
void insertSort()
{
    for(int i=1;i<=n-1;i++)
    {
        int temp=B[i],j=i;
        while(j>0&&temp<B[j-1]){
            B[j]=B[j-1];
            j--;
        }
        B[j]=temp;
    }
}
int main()
{
    selectSort();
    for(int i=0;i<10;i++)
        printf("%d ",A[i]);
    insertSort();
    printf("\n");
    for(int i=0;i<10;i++)
        printf("%d ",B[i]);
    printf("\n");
}
