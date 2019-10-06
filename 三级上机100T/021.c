double countValue(int n)
{
    int i;
    double s=0.0;
    for(i=1; i<n; i++)
        if(i%21==0)
            s+=i;
    return sqrt(s);
}
