#include <stdio.h>

int main()
{
  union
  {
    long  L;
	short a;
	char ch;
  } d = {0xFFF11241};

  printf("d.ch = %c  d.a = %X  d.L = %X\n",d.ch,d.a,d.L);
  d.a++;
  printf("d.ch = %c  d.a = %X  d.L = %X\n",d.ch,d.a,d.L);

}
