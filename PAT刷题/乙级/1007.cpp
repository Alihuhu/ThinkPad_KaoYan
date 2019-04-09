#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;
int issu(int n)
{
	for(int i=2;i<=(int)sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int a,num=0;
	scanf("%d",&a);
	for(int i=2;i+2<=a;i++)
		if(issu(i+2)&&issu(i))
			num++;

	printf("%d\n",num);
}
