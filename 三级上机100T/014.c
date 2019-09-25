void jsVal()
{
    int i,j,flag;
    for(i=0; i<MAX-5; i++)
    {
        for(j=i+1; j<=i+5; j++)
            if(a[i]>a[j]&&a[i]%2)
                flag=1;
            else
            {
                flag=0;
                break;

            }
        if(flag==1)
            b[cnt++]=a[i];
    }
    for(i=0; i<cnt-1; i++)
        for(j=i+1; j<cnt; j++)
            if(b[i]>b[j])
            {
                flag=b[i];
                b[i]=b[j];
                b[j]=flag;
            }
}
