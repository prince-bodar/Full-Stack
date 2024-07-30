#include<stdio.h>

int main()
 
   /* WAP and print   1 1 1 1 1
                      2 2 2 2 2
                      3 3 3 3 3 
                      4 4 4 4 4
                      5 5 5 5 5  */
 {
   int i=1,j;
         do{
	        j=1;
	             do{
			         printf("%d",i);
                     j++;				  
			       }while(j<=5);
		    i++;
            printf("\n");			
	       }while(i<=5);
	  				  
    return 0;
 }