int findStr(char *str,char *substr)
{
    int i,j,len1,len2,cnt=0,flag;
    len1=strlen(str);
    len2=strlen(substr);
    for(i=0; i<len1; i++)
    {
        for(j=0; j<len2; j++)
            if(str[i+j]==substr[j])
                flag=1;
            else
            {
                flag=0;
                break;
            }
        if(flag==1)
            cnt++;
    }
    return cnt;
}
