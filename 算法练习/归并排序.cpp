#include<stdio.h>
#include<stdlib.h>
void merge(int *p,int low,int mid,int high)
{
	int i,k;
	int* temp = (int*)malloc((high-low+1)*sizeof(int));//�ϲ��ռ�
	int start1 = low;
	int end1 = mid;
	int start2 = mid+1;
	int end2 = high;
	//�Ƚ�����ָ����ָ���Ԫ�أ�ѡ�����С��Ԫ�ط��뵽�ϲ��ռ䣬���ƶ�ָ�뵽��һλ��
	for (k = 0;start1<=end1 && start2<=end2;k++)
	{
		if (p[start1]<p[start2])
			temp[k] = p[start1++];
		else
			temp[k] = p[start2++];
	}
	//���ʣ�������ʣ�ֱ࣬�ӿ�������ճ���ϲ�����β
	while (start1<=end1)
		temp[k++] = p[start1++];
	while (start2<=end2)
		temp[k++] = p[start2++];
	//���ź�������鿽����ԭ����
	for (i = 0;i<high-low+1;i++)
		p[low+i] = temp[i];
	//�ϲ�����
	printf("%d:",mid);
	for (i = 0;i<high-low+1;i++)
		printf("%d ",p[low+i]);
	printf("\n");
	free(temp);
}
void merge_sort(int*p,int low,int high)
{
	int mid = (low+high)/2;
	if (low <high)
	{
		merge_sort(p,low,mid);
		merge_sort(p,mid+1,high);
		merge(p,low,mid,high);
	}
}
int main()
{
    int A[10]={7,4,1,8,5,2,0,9,6,3};
    merge_sort(A,0,9);
    for(int i=0;i<10;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
