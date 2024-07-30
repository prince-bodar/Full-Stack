#include<stdio.h>
#include<string.h>

int main()
{
    char arr1[10], arr2[10];
	int i,j;  
	gets(arr1);
	printf("\n");
	gets(arr2);
  
  for(i=0;arr1[i]!='\0';i++);
  
  for(j=0;arr2[j]!='\0';j++)
  {
	  arr1[i++]=arr2[j];
  }
  arr1[i]='\0';
  
  printf("the addition of string =%s",arr1);
	
	
  return 0;
}