#include<stdio.h>

int main()
{
  char  arr[7];
  int i;
  
  printf(" enter the value of arr = ");
  gets(arr);
  
  for(i=0;i<7;i++)
  {
	 printf("%s",arr[i]);
  }
  
  return 0;
}