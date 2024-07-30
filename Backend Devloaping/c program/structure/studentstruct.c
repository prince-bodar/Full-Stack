#include<stdio.h>
#include<string.h>


  struct student
  {
  
    int rn;
	char name[40];
	float per;
	
  }s1,s2,s3,s4,s5;
  
  int main()
  {
      printf("enter the student roll number = ");
      scanf("%d",&s1.rn);
      scanf("%d",&s2.rn);
      scanf("%d",&s3.rn);
      scanf("%d",&s4.rn);
      scanf("%d",&s5.rn);
	  
	  printf("\n enter the name of student  = ");
	  scanf("%s",s1.name);
	  scanf("%s",s2.name);
	  scanf("%s",s3.name);
	  scanf("%s",s4.name);
	  scanf("%s",s5.name);
	  
	  printf("\n enter student percentage =  ");
	  scanf("%f",&s1.per);
	  scanf("%f",&s2.per);
	  scanf("%f",&s3.per);
	  scanf("%f",&s4.per);
	  scanf("%f",&s5.per);
	  
      printf("\n student no 1 information");
      printf("\n student 1 roll no = %d",s1.rn);
      printf("\n student 1 name  = %s",s1.name);
	  printf("\n student 1 percentage = %f",s1.per);
      	
      printf("\n\n student no 2 information");
      printf("\n student 2 roll no = %d",s2.rn);
      printf("\n student 2 name  = %s",s2.name);
	  printf("\n student 2 percentage = %f",s2.per);
	  
	  printf("\n\n student no 3 information");
      printf("\n student 3 roll no = %d",s3.rn);
      printf("\n student 3 name  = %s",s3.name);
	  printf("\n student 3 percentage = %f",s3.per);
	  
	  printf("\n\n student no 4 information");
      printf("\n student 4 roll no = %d",s4.rn);
      printf("\n student 4 name  = %s",s4.name);
	  printf("\n student 4 percentage = %f",s4.per);
      
      printf("\n\n student no 5 information");
      printf("\n student 5 roll no = %d",s5.rn);
      printf("\n student 5 name  = %s",s5.name);
	  printf("\n student 5 percentage = %f",s5.per);
      	  	  
      	  
      	  		
  }