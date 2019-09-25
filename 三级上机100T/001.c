
int isP(int m)
{
    int i;
    for(i=2; i<m; i++)
        if(m % i==0)
            return 0;
    return 1;
}


void num(int m,int k,int xx[])
{
    int s=0;
    for(m=m+1; k>0; m++)
        if(isP(m))
        {
            xx[s++]=m;
            k--;
        }
}
