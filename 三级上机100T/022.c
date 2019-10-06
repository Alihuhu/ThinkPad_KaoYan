void CalValue(void)
{
    int i;
    for (i=0; i<N; i++)
    {
        sumint+=(long)xx[i];
        sumdec+=xx[i]-(long)xx[i];
        aver+=xx[i];
    }
    aver/=N;
}
