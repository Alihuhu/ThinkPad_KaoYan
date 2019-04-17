#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i = 3;
  float f = (float)9.8;
  FILE *fp;

  fp = fopen("wang.txt","w");   
  if (fp == NULL)               
  {
	printf("can't create file: wang.dat\n");
	exit(0);
  }
  fprintf(fp,"%2d,%6.2f",i,f);   
  fclose(fp);  

  fp = fopen("wang.txt","r");    
  if (fp == NULL)              
  {
	printf("can't open file: wang.dat\n");
	exit(0);
  }
  i = 0;       
  f = 0;       
  fscanf(fp,"%d,%f",&i,&f);     
  fclose(fp);                   

  printf("i = %2d, f = %6.2f\n",i,f);  
  
}
