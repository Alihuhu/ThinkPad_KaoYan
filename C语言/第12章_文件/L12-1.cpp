#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
  FILE *fp1,*fp2;
  char ch;

  if(argc != 2)  
  {  
    printf("the number of arguments not correct\n\n");
    printf("Usage: 可执行文件名  filename \n");
	exit(0);
  }

  if ((fp1 = fopen(argv[1],"wt")) == NULL) 
  {  
    printf("can not open this file\n");
    exit(0);
  }

  
  for( ; (ch = getchar()) != '@' ; )
    fputc(ch,fp1);  
  fclose(fp1); 	   
  
  
  fp2 = fopen(argv[1],"rt");
  for( ; (ch=fgetc(fp2)) != EOF ; ) 
    putchar(ch); 	
  fclose(fp2);      
  
}
