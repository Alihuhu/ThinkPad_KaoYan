#include <stdio.h>
#include <stdlib.h>

int main()
{ 
  FILE *fp1,*fp2;
  char str[] = "123456789";

  fp1 = fopen("wang.txt","w");  	
  if (fp1 == NULL)               
  {  
    printf("can not open file: wang.txt\n");
    exit(0);
  }
  
  fputs(str,fp1);                
  fputs("\nabcd",fp1);       
  fclose(fp1); 	                
  
  fp2 = fopen("wang.txt","rt"); 
  fgets(str,8,fp2);              
  printf("%s\n",str);
  fgets(str,8,fp2);             
  printf("%s\n",str);
  fgets(str,8,fp2);             
  printf("%s\n",str);
  
  fclose(fp2);                   
  
}
		
