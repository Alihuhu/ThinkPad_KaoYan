float countValue()
{
    float x0,x1;
    x1=0.0;
    do
    {
        x0=x1;
        x1=cos(x0);
    }
    while(fabs(x0-x1)>=0.000001);
    return x1;
}
