#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

struct student_info
{    
  char no[9];
  char name[10];
  char sex;
  int  age;
  char depart[15];
}stu[3] = { {"0001","WangFei",'M',18,"Computer"},
			{"0002","ZhangMin",'M',19,"Math"},
			{"0003","LiYan",'F',19,"English"} };

int main()
{   
  int i;
  FILE *fp;

  fp = fopen("student.dat","wb+");   
  if(fp == NULL)   
  {   
    printf("can't create file: student.dat\n");
	exit(0);   
  }

  fwrite(stu,sizeof(struct student_info),3,fp);   
  rewind(fp);  
  
  memset(stu,0,3*sizeof(struct student_info));  

  for(i = 0; i < 3; i += 2)   
  {   
	fseek(fp,i*sizeof(struct student_info),SEEK_SET);  
    fread(&stu[i],sizeof(struct student_info),1,fp);  
    printf("%12s%14s%5c%5d%15s\n",stu[i].no,stu[i].name,stu[i].sex,stu[i].age,stu[i].depart);
  }
  fclose(fp); 
}
