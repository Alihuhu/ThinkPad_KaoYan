#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
struct Student{
    char name[10];
    char id[10];
    int score;
    int r;
}stu[100010];
bool cmp(Student a,Student b){
    if(a.score!=b.score) return a.score>b.score;
    else return strcmp(a.name,b.name)<0;
}
int main()
{
    for(int i=0;i<5;i++)
    {
        scanf("%s%s%d",stu[i].name,stu[i].id,&stu[i].score);
    }
    sort(stu,stu+5,cmp);
    stu[0].r=1;
    for(int i=0;i<5;i++)
    {
        if(stu[i].score==stu[i-1].score){
            stu[i].r=stu[i-1].r;
        }
        else{
            stu[i].r=i+1;
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%s,%s,%d,%d\n",stu[i].name,stu[i].id,stu[i].score,stu[i].r);
    }
}
