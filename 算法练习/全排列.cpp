//ժ���㷨�ʼ�
#include<iostream>
using namespace std;
const int maxn=11;
int n,P[maxn],hashTable[maxn]={false};
void generateP(int index){
	if(index==n+1){//�ݹ�߽磬�Ѿ�����������1~nλ��
		//���������
		for(int i=1;i<=n;i++){
			cout<<P[i];
		}
		cout<<endl;
		return;
	}

	for(int x=1;x<=n;x++){ //ö��1~n ��ͼ��x����P[index] ÿ�ζ���С����ö����������
		if(hashTable[x]==false){//���x����P[0]~P[index-1]�У�ǰindex-1�Ѿ�����ˣ�
			P[index]=x;	//��x����P�� Ҳ����indexλ
			hashTable[x]=true; //��x��P��
			generateP(index+1); //�������еĵ�index+1��λ
			hashTable[x]=false; //�Ѿ�������P[index]Ϊx�������⣬��ԭ״̬���õ�indexλ����������ǰҪ�Ƚ���x�ſ�������û������
		}
	}
}

int main(){
	//ǧ��Ҫ���ζ������n ����ȫ�ֱ�����ɾֲ����� ������
	while(cin>>n){
		generateP(1);//��1��ʼ��
	}
	return 0;
}
//C++ȫ���к���
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












