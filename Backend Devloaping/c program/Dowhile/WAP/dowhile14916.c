#include<stdio.h>

int main()
  {
	 // WAP and print  1,4,9,16...n 
	  
   int i,n;
     printf("Enter any number =");
	 scanf("%d",&n);
	   i=1;
	       do{
		      printf("%d\t",i*i);
              i++;			  
	   	     }while(i<=n);
	  return 0 ;
  }