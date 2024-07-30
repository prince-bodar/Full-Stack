#include<stdio.h>

int main()
 //print the number  1 to 25
 {
    int i=1,k=1,j;
	  while(i<=5)
	    {
		  j=1;
		       while(j<=5)
			       {
                      printf("%d,\t",k++);					  
					  j++;
				   }
		  i++;
	   	  printf("\n");			   
		}
   return 0;
 
 }