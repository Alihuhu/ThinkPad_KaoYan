void StrCharJR()
{
    int i,j;
    for(i=0; i<maxline; i++)
        for(j=0; j<strlen(xx[i]); j++)
            xx[i][j]+=(xx[i][j]>>4);

    ��������λ�ı�﷽ʽ��
}
