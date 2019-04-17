#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
  FILE *input, *output;	
  
  if(argc != 3)     
  {  printf("the number of arguments not correct\n");
     printf("\n Usage:  test  source-file  dest-file");
     exit(0);
  }

  if ((input = fopen(argv[1],"r")) == NULL)  	 
  {  
	printf("can not open source file\n");
    exit(0);
  }
  
  if ((output = fopen(argv[2],"w")) == NULL)     
  {  
	printf("can not create destination file\n");
    exit(0);
  }

  for( ; ( !feof(input) ) ; ) 
	 fputc(fgetc(input),output); 

  fclose(input);   
  fclose(output);  

}
