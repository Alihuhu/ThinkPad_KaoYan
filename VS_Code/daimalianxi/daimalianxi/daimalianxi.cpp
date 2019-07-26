#include<iostream>
#include<cstdio>
using namespace std;
struct Info
{
	char ID[15];
	int begin;
	int end;
}myInfo[1000];
int main()
{
	int n;
	//char myID[15];
	char mybegin[9];
	char myend[9];
	scanf("%d", &n);
	//Info myInfo[1000];
	for (int i = 0; i < n; i++)
	{
		scanf("%s%s%s", myInfo[i].ID, mybegin, myend);
		int bbgegin = (mybegin[0]-'0') * 100000 +( mybegin[1]-'0') * 10000 + (mybegin[3]-'0') * 1000 + (mybegin[4]-'0') * 100 + (mybegin[6]-'0') * 10 + (mybegin[7]-'0');
		myInfo[i].begin = bbgegin;
		
		int eend = myend[0] * 100000 + myend[1] * 10000 + myend[3] * 1000 + myend[4] * 100 + myend[6] * 10 + myend[7];
		myInfo[i].end = eend;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%s %d %d\n", myInfo[i].ID, myInfo->begin, myInfo->end);
	}
}
3
as100 08:20 : 56 10 : 10 : 10
as200 07 : 20 : 20 14 : 14 : 14
as300 21 : 21 : 21 22 : 22 : 22