void ChA(void)
{
    int i,j;
    char ch;
    for(i=0; i<maxline; i++)
    {
        ch=xx[i][0];
        for(j=0; j<strlen(xx[i])-1; j++)
            xx[i][j]+=xx[i][j+1];
        xx[i][strlen(xx[i])-1]+=ch;
        strrev(xx[i]);
    }
}
