//摘自算法笔记
#include<iostream>
using namespace std;
const int maxn=11;
int n,P[maxn],hashTable[maxn]={false};
void generateP(int index){
	if(index==n+1){//递归边界，已经处理完排列1~n位了
		//可以输出了
		for(int i=1;i<=n;i++){
			cout<<P[i];
		}
		cout<<endl;
		return;
	}

	for(int x=1;x<=n;x++){ //枚举1~n 试图将x填入P[index] 每次都从小到大枚举所有数字
		if(hashTable[x]==false){//如果x不在P[0]~P[index-1]中（前index-1已经填好了）
			P[index]=x;	//将x填入P中 也即是index位
			hashTable[x]=true; //记x在P中
			generateP(index+1); //处理排列的第index+1号位
			hashTable[x]=false; //已经处理完P[index]为x的子问题，还原状态，让第index位填其他数字前要先将此x放开，否则没机会了
		}
	}
}

int main(){
	//千万不要二次定义变量n 否则全局变量变成局部变量 害死人
	while(cin>>n){
		generateP(1);//从1开始填
	}
	return 0;
}
//C++全排列函数
/*#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int num[3]={1,2,3};
    do
    {
        cout<<num[0]<<" "<<num[1]<<" "<<num[2]<<endl;
    }while(next_permutation(num,num+3));
    return 0;
}*/












