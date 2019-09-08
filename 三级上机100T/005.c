
void jsSort()
{
    int i,j,data;
    for(i=0; i<199; i++)
        for(j=i+1; j<200; j++)
            if(aa[i]%1000>aa[j]%1000||aa[i]%1000==aa[j]%1000&
                    &aa[i]<aa[j])
            {
                data=aa[i];
                aa[i]=aa[j];
                aa[j]=data;
            }
    for(i=0; i<10; i++)
        bb[i]=aa[i];
}
