#include <stdio.h>
int main()
{
    short int a[2][3]={{1,2,3},{4,5,6}};
    short int (*p)[3];
    short int i,j;
    p=a;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",p[i][j]);
        printf("\n");
    }
    printf("--------\n");
    p++;
    for(j=0;j<3;j++)
        printf("%d ",p[0][j]);
    printf("\n");
}