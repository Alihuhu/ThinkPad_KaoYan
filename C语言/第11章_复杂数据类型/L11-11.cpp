#include<stdio.h>

struct MyStruct
{
  unsigned char  a : 1;
  unsigned char  b : 5;
  unsigned short c : 10;
};

union MyUnion
{
  unsigned short  x;
  struct MyStruct y;
};

int main()
{
  union MyUnion m = {(unsigned short)0XFFF1};

  printf("m.y.a = %u\n",m.y.a);
  printf("m.y.b = %u\n",m.y.b);
  printf("m.y.c = %u\n",m.y.c);

  m.y.b = 0;
  printf("%X\n",m.x);
}
