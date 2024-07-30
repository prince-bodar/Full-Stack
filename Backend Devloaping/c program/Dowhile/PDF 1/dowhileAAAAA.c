#include<stdio.h>

int main()
{
  int i=1,j,k=65;
      do{
	      j=1;
		         do{
				      printf("%c",k);
					  j++;
				   }while(j<=5);
		  k++;
		  printf("\n");
	      i++;  
     	}while(i<=5);
		
     return 0;				
}