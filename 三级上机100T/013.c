void SortDat()
{
    int i,j;
    PRO xy;
    for(i=0; i<99; i++)
        for(j=i+1; j<100; j++)


            if(strcmp(sell[i].dm,sell[j].dm)>0||strcmp(sell[i].dm,sell[j].dm)==0&&sell[i].je<sell[j].je)
            {
                xy=sell[i];
                sell[i]=sell[j];
                sell[j]=xy;
            }
}
