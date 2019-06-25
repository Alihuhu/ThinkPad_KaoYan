#include<stdio.h>
#include<stdlib.h>
void swap(int *a, int *b)
{
  int t;
  t = *a;
  *a = *b;
  *b = t;
}
void printArray(int a[], int count)
{
  int i;
  for(i = 0; i < count; i++)
    printf("%d ",a[i]);
  printf("\n");
}
void Odd_even_sort(int a[], int size)
{
  bool sorted = false;
  while(!sorted)
  {
    sorted = true;
    for(int i = 1; i < size - 1; i += 2)
    {
      if(a[i] > a[i + 1])
      {
        swap(&a[i], &a[i + 1]);
        sorted = false;
      }
    }
    for(int i = 0; i < size - 1; i += 2)
    {
      if(a[i] > a[i + 1])
      {
        swap(&a[i], &a[i+1]);
        sorted = false;
      }
    }
  }
}
int main(void)
{
  int a[] = {3, 5, 1, 6, 9, 7, 8, 0, 11};
  int n = sizeof(a) / sizeof(*a);
  Odd_even_sort(a, n);
  printArray(a, n);
  return 0;
}
