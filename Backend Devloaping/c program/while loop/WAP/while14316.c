#include<stdio.h>

int main()
  
  {
    int i=1,n;
	
	printf("enter the any number = ");
	scanf("%d",&n);
	
	    while(i<=n)
		 {
		   if(i%2==0)
		      {
		        printf("%d\t",i*i);
		      }else
			  {
			    printf("%d\t",i);
			  }
			i++;
		 }
		 
  }