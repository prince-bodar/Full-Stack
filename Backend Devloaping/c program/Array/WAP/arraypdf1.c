#include<stdio.h>
int main()
{
	int i=1,j=1,k=1;
      while(i<=5)
	  {
		  while(j<=i)
		    {
				printf("%d",k++);
				j++;
			}
		  printf("\n");
		  i++;
	  }		
  return 0;	  
}