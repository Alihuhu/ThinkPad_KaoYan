#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main()
{
    int num,i;
	int maxscore,minscore,sumscore;
	int *pscore;
    float averscore;
	
	printf("input the number of student: ");  
	scanf("%d",&num);
    if (num <= 0 )
	   return 0;

	pscore = (int *) malloc(num * sizeof(int));  
    if( pscore == NULL )
	{
      printf( "Insufficient memory available\n" );
	  exit(0);
	}

	printf("input the scores of students now:\n"); 
	for(i = 0; i < num; i++)
	  scanf("%d", pscore + i);

	maxscore = pscore[0];  
	minscore = pscore[0];
	sumscore = pscore[0];
	for(i = 1; i < num; i++)
	{
      if (pscore[i] > maxscore) 
	     maxscore = pscore[i];
	  if (pscore[i] < minscore)
	     minscore = pscore[i];
      sumscore = sumscore + pscore[i]; 
	}

	averscore = (float)sumscore / num; 
    
	printf("----------------------------------------------\n"); 
    printf("the average score of the students is %.1f\n", averscore);
	printf("the highest score of the students is %d\n", maxscore);
	printf("the lowest score of the students is %d\n", minscore);
   
	free(pscore);   
}