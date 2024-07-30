#include<stdio.h>

int main()
{
  int i=1,k=65,j;
     while(i<=5)
	  {
	    j=1;
		   while(j<=5)
		    {
			  printf("%c",k);
			  j++;
			}
		k++;
		printf("\n");
		i++;
	  }
	return 0 ;
}