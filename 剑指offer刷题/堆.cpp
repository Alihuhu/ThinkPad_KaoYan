
#include<algorithm>

#include<cstdio>

using namespace std;

bool cmp(int a,int b) //比较函数

{

    return a>b;

}

int main()

{

    int i,number[20]={29,23,20,22,17,15,26,51,19,12,35,40};

    make_heap(&number[0],&number[12]);

    //结果是:51 35 40 23 29 20 26 22 19 12 17 15

    for(i=0;i<12;i++)/*************************************************************/

        printf("%d ",number[i]);

    printf("\n");

    make_heap(&number[0],&number[12],cmp);

    //结果：12 17 15 19 23 20 26 51 22 29 35 40

    for(i=0;i<12;i++)/**************************************************************/

        printf("%d ",number[i]);

    printf("\n");

    //加入元素8

    number[12]=888;

    //加入后调整

    push_heap(&number[0],&number[13],cmp);

    //结果：8 17 12 19 23 15 26 51 22 35 40 20

    for(i=0;i<13;i++)/************************************************************************/

        printf("%d ",number[i]);

    printf("\n\n");

    //弹出元素8

    pop_heap(&number[0],&number[13],cmp);

    //结果：12 17 15 19 23 20 26 51 22 29 35 40

    for(i=0;i<13;i++)/*****************************************************************/

        printf("%d ",number[i]);

    printf("\n");

    sort_heap(&number[0],&number[12],cmp);

    //结果不用说都知道是有序的了！

    for(i=0;i<12;i++)/***************************************************************/

        printf("%d ",number[i]);

    return 0;

}
