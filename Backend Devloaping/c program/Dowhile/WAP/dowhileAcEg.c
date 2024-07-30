#include<stdio.h>

int main()
  {
	 // WAP and print A,c,E,g....z
	  
   int i=1,j=65,k=97;
	       do{
		             if(i%2==1)
			            {
			              printf("%c\t",j);
						  j=j+2;
						  k=k+2;
			            }else
						{
						  printf("%c\t",k);
						  j=j+2;
						  k=k+2;
						}
               i++;						
		     }while(i<=13);
	  return 0 ;
  }