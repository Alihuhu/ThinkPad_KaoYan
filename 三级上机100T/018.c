void encryptChar()
{
    int i,j;
    for(i=0; i<maxline; i++)
        for(j=0; j<strlen(xx[i]); j++)
            if(xx[i][j]*11%256<=32||xx[i][j]%2==0)
                continue;
            else
                xx[i][j]=xx[i][j]*11%256;
}
