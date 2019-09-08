{
    int i,j,k,s,m,strl;
    char str[80];
    for(i=0; i<maxline; i++)
    {
        strl=strlen(xx[i]);
        memset(str,0,80);
        s=k=0;
        for(j=strl-1; j>=0; j--)
        {
            if(isalpha(xx[i][j]))
                k++;
            else
            {
                for(m=1; m<=k; m++)
                    str[s++]=xx[i][j+m];
                k=0;
            }
            if(!isalpha(xx[i][j]))
                str[s++]=' ';
        }
        for(m=1; m<=k; m++)
            str[s++]=xx[i][j+m];
        str[s]='\0';
        strcpy(xx[i],str);
    }
}
