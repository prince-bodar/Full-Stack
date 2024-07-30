#include<stdio.h>

int main()
  {
	 // WAP and print evennumber 13579...n 
	  
   int i,n;
     printf("Enter any number =");
	 scanf("%d",&n);
	   i=1;
	       do{
		             if(i%2==1)
			            {
			              printf("%d\t",i);
			            }
               i++;						
		     }while(i<=n);
	  return 0 ;
  }