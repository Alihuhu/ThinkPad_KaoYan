void ConvertCharA(void)
{
    int i,j;
    for(i=0; i<maxline; i++)
    {
        for(j=0; j<strlen(xx[i]); j++)
            if(xx[i][j]=='z')
                xx[i][j]='a';
            else	if(xx[i][j]>='a'&&xx[i][j]<='y')
                xx[i][j]+=1;
    }
}
