#include<stdio.h>

int main()
{
  int i=1,j;
        do{
		   j=1;
		            do{
				         if(i%2==0)
						 {
						    printf("%d",i);
						 }
				    	j++;	 
				      }while(j<=5);
				  
		    printf("\n");
            i++;			
		  }while(i<=5);
		  
    return 0;		  
}