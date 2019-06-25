#include<stdio.h>
int A[10]={0,1,2,3,4,5,6,7,8,9};
int Bsearch(int low,int high,int x)
{
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(A[mid]==x)
            return mid+1;
        else if(A[mid]>x)
        {
            high=mid-1;
        }
        else low=mid+1;
    }
    return 0;
}
int main()
{
    int b=Bsearch(0,9,9);
    printf("%d\n",b);
}
