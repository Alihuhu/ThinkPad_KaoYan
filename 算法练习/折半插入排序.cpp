#include<stdio.h>
#include<stdlib.h>

int A[16]={2,5,9,7,6,1,0,8,3,4,15,14,13,11,12,10};

/*�������������*/
void Print()
{
	int i;
	for (i = 0; i < 16; i++)
	{
		printf(" %d ",A[i]);
	}
	printf("\n");
}

/*�۰����������������*/
void BinaryInsertSortup()
{
	int i,j,x,m;      //i,j��Ϊѭ��������x�����洢��ǰ����������ݣ�m�䵱�Ƚ�������е�
	int low,high;     //low����Ҫ��A[i]���бȽϵ���������ĵ�һ��Ԫ������λ�á�
                      //high����Ҫ��Array[i]���бȽϵ�������������һ��Ԫ������λ�á�
	for (i = 1; i < 16; i++)
	{
		x = A[i];
		low = 0;      //��һ�λ�������Ƚ����䣬�Ƚ�����ĵ�һ��Ԫ������λ��Ϊ0
		high = i-1;   //��һ�λ�������Ƚ����䣬�Ƚ���������һ��Ԫ������λ��Ϊn-1
		              //�Ƚϲ���Array[i]���ʲ����λ��
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
		/*ȷ����λ�ú󣬽�λ��֮������ݺ��ƣ��������������*/
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
