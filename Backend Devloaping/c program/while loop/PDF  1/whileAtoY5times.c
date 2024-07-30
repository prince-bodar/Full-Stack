#include<stdio.h>

int main()
      // print the alphabet A to Y in 5 line
{
  int i=1,k=65,j;
    
	  while(i<=5)
	   {
	      j=1;
	          while(j<=5)
			     {
				    printf("%c,\t",k++);
                    j++;					
				 }
		  printf("\n");
		  i++;
	   }
}