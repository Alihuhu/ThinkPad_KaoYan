#include<stdio.h>

int A[15]={9,8,7,6,5,4,3,2,1,0,11,12,13,14,15};
void BubbleSort()
{
    int i,j,flag;
    for(i=14;i>=1;--i)
    {
        flag=0;
        for(j=1;j<i;++j)
        {
            if(A[j-1]>A[j])
            {
                int temp=A[j];
                A[j]=A[j-1];
                A[j-1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            return ;
    }
}
int main()
{
    BubbleSort();
    for(int i=0;i<15;i++)
    {
        printf("%d ",A[i]);
    }
}
