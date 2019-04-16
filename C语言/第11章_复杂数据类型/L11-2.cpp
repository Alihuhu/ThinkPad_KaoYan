#include <stdio.h>
#include <string.h>

struct person
{   
  char name[20];   
  int  count;      
} leader[3]={"Li",0,"Zhang",0,"Wang",0}; 

int main()
{    
  int  i,j;  
  char leader_name[20];

  while(1)    
  {   
    scanf("%s",leader_name); 
	if (strcmp(leader_name,"0") == 0)  
	   break;
    for(j = 0; j < 3; j++)   
	   if (strcmp(leader_name,leader[j].name) == 0)  
	      leader[j].count++;   
  }

  for(i = 0; i < 3; i++)  
     printf("%5s : %d\n",leader[i].name,leader[i].count);
}

