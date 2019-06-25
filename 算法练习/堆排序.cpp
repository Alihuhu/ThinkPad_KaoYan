#include<stdio.h>
void Sift(int R[],int low,int high)
{
    int i=low,j=2*i;
    int temp=R[i];
    while(j<=high)
    {
        if(j<high&&R[j]<R[j+1])
            ++j;
        if(temp<R[j])
        {
            R[i]=R[j];
            i=j;
            j=2*i;
        }
        else break;
    }
    R[i]=temp;
}
void heapSort(int R[],int n)
{
    int i;
    int temp;
    for(i=n/2;i>=0;--i)
        Sift(R,i,n);
    for(i=n;i>=1;--i)
    {
        temp=R[0];
        R[0]=R[i];
        R[i]=temp;
        Sift(R,0,i-1);
    }
}
int main()
{
    int A[20]={7,4,1,8,5,2,0,9,6,3,11,14,17,18,15,12,10,19,16,13};
    heapSort(A,19);
    for(int i=0;i<20;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
