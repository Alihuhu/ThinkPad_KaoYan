#include<stdio.h>
#include<string.h>
char xx[][100]={"asdfdsafdadfobinsfgbiopobbofdspmf"};
void StrOR(void)
{
    int i,righto,j,s,k;
    char tem[80];
    for(i=0; i<1; i++)//文件行数
        for(j=strlen(xx[i])-1; j>=0; j--)//每行字符串长度
        {
            k=0;
            memset(tem,0,80);
            if(xx[i][j]=='o')//第j个字符是o
            {
                righto=j;
                for(s=righto+1; s<strlen(xx[i]); s++)
                    tem[k++]=xx[i][s];
                for(s=0; s<righto; s++)
                    if(xx[i][s]!='o')
                        tem[k++]=xx[i][s];
                strcpy(xx[i],tem);
            }
            else
                continue;
        }
}
int main()
{
    StrOR();
    printf("%s",xx[0][100]);
}
