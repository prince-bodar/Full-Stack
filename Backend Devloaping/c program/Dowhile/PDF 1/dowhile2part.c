#include<stdio.h>

int main()
 {
   int i=5,j;
     
	  do{
	     j=5;
		        do{
				     printf("%d",i);
					 j--;
				  }while(j>=1);
				  
	     printf("\n");
         i--;		 
	    }while(i>=1);
   return 0;
 }