
void jsVal()
{
    int i,j,qw,bw,sw,gw;
    for(i=0; i<MAX; i++)
    {
        qw=a[i]/1000;
        bw=a[i]/100%10;
        sw=a[i]%100/10;
        gw=a[i]%10;


        if(qw&&qw%2==0&&bw%2==0&&sw%2==0&&gw
                %2==0)
            b[cnt++]=a[i];
    }
    for(i=0; i<cnt-1; i++)
        for(j=i+1; j<cnt; j++)
            if(b[i]<b[j])
            {
                qw=b[i];
                b[i]=b[j];
                b[j]=qw;
            }
}
