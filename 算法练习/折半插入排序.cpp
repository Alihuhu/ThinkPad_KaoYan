#include<stdio.h>
#include<stdlib.h>

int A[16]={2,5,9,7,6,1,0,8,3,4,15,14,13,11,12,10};

/*输出已排序数组*/
void Print()
{
	int i;
	for (i = 0; i < 16; i++)
	{
		printf(" %d ",A[i]);
	}
	printf("\n");
}

/*折半插入排序升序排列*/
void BinaryInsertSortup()
{
	int i,j,x,m;      //i,j均为循环变量，x用来存储当前待排序的数据，m充当比较区间的中点
	int low,high;     //low代表要与A[i]进行比较的有序区间的第一个元素所在位置。
                      //high代表要与Array[i]进行比较的有序区间的最后一个元素所在位置。
	for (i = 1; i < 16; i++)
	{
		x = A[i];
		low = 0;      //第一次划分有序比较区间，比较区间的第一个元素所在位置为0
		high = i-1;   //第一次划分有序比较区间，比较区间的最后一个元素所在位置为n-1
		              //比较查找Array[i]合适插入的位置
		while (low <= high)
		{
			m = (low + high)/2;
			if (x > A[m])
			{
				low = m+1;
			}
			else
			{
				high = m-1;
			}
		}
		/*确定好位置后，将位置之后的数据后移，插入待排序数据*/
		for (j = i-1;j > high; j--)
		{
			A[j+1] = A[j];
		}
		A[j+1] = x;
	}

}

int main()
{
	BinaryInsertSortup();
	Print();
	return 0;
}
