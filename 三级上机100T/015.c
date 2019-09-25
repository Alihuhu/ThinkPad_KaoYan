void jsVal()
{
    int i,j;
    int qw,bw,sw,gw;
    for (i=0; i<MAX; i++)
    {
        qw=a[i]/1000;
        bw=a[i]%1000/100;
        sw=a[i]%100/10;
        gw=a[i]%10;

        if((qw<=bw)&&(bw<=sw)&&(sw<=gw)&&(a[i]%2==0))
            b[cnt++]=a[i];
    }
    for(i=0; i<cnt-1; i++)
        for(j=i+1; j<cnt; j++)
            if (b[i]>b[j])
            {
                qw=b[i];
                b[i]=b[j];
                b[j]=qw;
            }
}
