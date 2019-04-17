#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
  FILE *fp;
  long length;

  if (argc != 2)  //命令行参数有误
  {
	printf("Useage: 执行文件名  filename\n");
	exit(0);
  }

  fp = fopen(argv[1],"rb");    
  if(fp == NULL)   
  {
    printf("file not found!\n");
    exit(0);
  }
  fseek(fp,0L,SEEK_END);    
  length = ftell(fp);       
  printf("Length of File is %ld bytes\n",length);   

  fclose(fp);   
}
