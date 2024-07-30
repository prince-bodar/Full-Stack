#include<stdio.h>

int main()
// print number 13579 for 5 times
				
{
  int i=1,j;
      while(i<=5)
	    {
		   j=1;
		     while(j<=10)
			 {
			        if(j%2==1)
					   {
					     printf("%d\t",j);
					   }
			    j++;
			 }
		    printf("\n");
		   i++;
		}
	return 0 ;
}