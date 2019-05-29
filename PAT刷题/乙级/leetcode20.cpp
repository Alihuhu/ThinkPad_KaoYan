#include<stdio.h>
char stack[1001];
int top=-1;
int main()
{
    char a[1001];
    scanf("%s",a);
    bool flag=0;
    for(int i=0;i<1001;i++)
    {
        if(a[i]=='\0')
        {
            flag=1;
            break;
        }
        else if(a[i]=='('||a[i]=='['||a[i]=='{') stack[++top];
        else if(a[i]==')'||a[i]==']'||a[i]=='}') {
            if(a[i]==')'&&stack[top]=='(')
                stack[top--];
            else if(a[i]==']'&&stack[top]=='[')
                stack[top--];
             else   if(a[i]=='}'&&stack[top]=='{')
                stack[top--];
            else {
                flag=0;
                break;
            }
        }
    }
    if(flag&&top==-1)printf("true\n");
    else printf("false\n");
}
