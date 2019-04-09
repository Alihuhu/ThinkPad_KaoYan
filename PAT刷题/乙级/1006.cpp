include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=100)
	{
		int b=a%10;
		int c=(a/10)%10;
		int d=a/100;
		for(int i=0;i<d;i++)
			printf("B");
		for(int i=0;i<c;i++)
			printf("S");
		for(int i=1;i<=b;i++)
			printf("%d",i);
		printf("\n");
	}
	else if(a>=10)
	{
		
		int c=a%10;
		int d=a/10;
		for(int i=0;i<d;i++)
			printf("S");
		for(int i=1;i<=c;i++)
			printf("%d",i);
		printf("\n");
	}
	else{
		
		for(int i=1;i<=a;i++)
			printf("%d",i);
		printf("\n");
	}
}
