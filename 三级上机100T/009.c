void SortCharD(void)
{
    int i,j,k,strl;
    char ch;
    for(i=0; i<maxline; i++)
    {
        strl=strlen(xx[i]);
        for(j=0; j<strl-1; j++)
            for(k=j+1; k<strl; k++)
                if(xx[i][j]<xx[i][k])
                {
                    ch=xx[i][j];
                    xx[i][j]=xx[i][k];
                    xx[i][k]=ch;
                }
