#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
struct stu{
    char id[16];
    int h,m,s;
}s1[100],s2[100];
int cmp1(stu a,stu b){
    if(a.h!=b.h)
        return a.h<b.h;
    else if(a.m!=b.m)
        return a.m<b.m;
    else if(a.s!=b.s)
        return a.s<b.s;
}
int cmp2(stu a,stu b){
    if(a.h!=b.h)
        return a.h>b.h;
    else if(a.m!=b.m)
        return a.m>b.m;
    return a.s<b.s;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %d:%d:%d",s1[i].id,&s1[i].h,&s1[i].m,&s1[i].s);
        scanf("%d:%d:%d",&s2[i].h,&s2[i].m,&s2[i].s);
		strcpy(s2[i].id,s1[i].id);
	}
	sort(s1, s1+n, cmp1);
	printf("%s ", s1[0].id);
	sort(s2, s2+n, cmp2);
	printf("%s", s2[0].id);
	return 0;
}











