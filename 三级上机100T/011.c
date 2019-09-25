void chg(char *s)
{
    int I;
    for(I=0; I<strlen(s); I++)
        if(s[i]=='z'||s[i]=='Z')
            s[i]-=25;
        else	if(s[i]>='a'&&s[i]<='y'||s[i]	>='A'&&s[i]<='Y')
            s[i]+=1;
}
