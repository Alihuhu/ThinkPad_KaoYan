#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//运行结果不一样哎，有时间在看一下。
int GetMonth(char *str);

char *month_str[] = {"January","February","march","April","May","June","July",
                     "August","September","October","November","December"};

int main(int  argc, char  *argv[])
{
  int k;
  if ( argc != 2)
  {
    printf("Use this program like this: example9-15 3\n\n");
	exit(0);
  }
  
  k = GetMonth(argv[1]);
  if (k == -1)
  {
	printf("command line argument must be in [1..12]\n\n");
	exit(0);
  }
  printf("%s\n",month_str[k-1]);
}

int GetMonth(char *str)
{
  int k,i = 0;

  while(str[i] != 0)
  {
	if (str[i] < '0' || str[i] > '9')
       return(-1);
	else
	   i++;
  }
  k = atoi(str);
  if (k < 0 || k > 12)
	 return(-1);
  return(k);
}