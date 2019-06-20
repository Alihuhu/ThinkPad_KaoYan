#include <iostream>

using namespace std;

//希尔排序
void shellSort(int iarr[],int length)
{
    int dt[3] = {5,3,1},i =0 ,j,k,temp;
    for(j = 0; j < 3; ++j)//三次，分别以增量5,3,1来排序
    {
        for(i = dt[j]; i < length; ++i)
        {
            temp = iarr[i];
            k = i - dt[j];
            while(temp < iarr[k] && k >= 0)
            {
                iarr[k + dt[j]] = iarr[k];
                k -= dt[j];
            }
            iarr[k + dt[j]] =  temp;
        }
    }
}
int main()
{
    int a[25]={8,7,7,10,7,28,30,3,12,0,1,3,9,4,1,3,2,16,9,10,14,12,11,4,19};
    shellSort(a,25);
    for(int i=0;i < 25; ++i)
        cout << a[i] << " ";
    return 0;
}
