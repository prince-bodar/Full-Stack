#include<stdio.h>

int main()
{
  int i=1,j,k=11;
       
	     do{
		      j=1;
			           do{
					       printf("%d\t",k++);
						   j++;
						 }while(j<=5);
			  printf("\n");
			  k+=5;
			  i++;
		   }while(i<=5);
   return 0;		   
}