#include<stdio.h>
int A[10]={7,4,1,8,5,2,9,6,3,0};
void QuickSort(int A[],int low,int high)
{
    int temp;
    int i=low,j=high;
    if(low<high)
    {
        temp=A[low];
        while(i<j)
        {
            while(j>i&&A[j]>=temp) --j;
            if(i<j)
            {
                A[i]=A[j];
                ++i;
            }
            while(i<j&&A[i]<temp) ++i;
            if(i<j)
            {
                A[j]=A[i];
                --j;
            }
        }
        A[i]=temp;
        QuickSort(A,low,i-1);
        QuickSort(A,i+1,high);
    }

}
int main()
{
    for(int i=0;i<10;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    QuickSort(A,0,9);
    for(int i=0;i<10;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}



