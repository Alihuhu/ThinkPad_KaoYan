
#include <stdio.h>
#include <stdlib.h>

#define  KEY 0xFA

int main(int argc,char *argv[])
{
  FILE *fpr,*fpw;
  char ch,k = (char)KEY;
  
  if (argc != 3 || *argv[2] != '+' && *argv[2] != '-')   
  {
	printf("Useage: 执行文件名  filename +/-\n");
	exit(0);
  }
  
  fpr = fopen(argv[1],"rb");    
  if(fpr == NULL)               
  {
    printf("file: %s not found!\n",argv[1]);
    exit(0);
  }

  fpw = fopen(argv[1],"rb+");    
  if(fpw == NULL)               
  {
    printf("file: %s not found!\n",argv[1]);
    exit(0);
  }
  
  while((ch = fgetc(fpr)) != EOF)
  {
    fputc(ch^k,fpw);
   	k = (*argv[2] == '+') ? ch : ch^k;
  }

  fclose(fpr);   
  fclose(fpw);    
}
