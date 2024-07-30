#include<stdio.h>

int main()
 /* 11 12 13 14 15
    21 22 23 24 25
	31 32 33 34 35
	41 42 43 44 45
	51 52 53 54 55 */
	
 {
   int i=1,k=11,j;
     while(i<=5)
	   {
	     j=1;
		      while(j<=5)
			     {
				    printf("%d,\t",k++);
					j++;
				 }
	     printf("\n");
		 k+=5;
         i++;		 
	   }
    return 0;
 }