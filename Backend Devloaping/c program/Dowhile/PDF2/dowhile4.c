#include<stdio.h>

int main()
{
	/*  1
        2       3
        4       5       6
        7       8       9       10
        11      12      13      14      15
   */
  int i=1,j,k=1;
  
       do{
	       j=1;
		          do{
				      printf("%d\t",k++);
					  j++;
					}while(j<=i);
			printf("\n");
            i++;			
	     }while(i<=5);
		 
  return 0 ;
}