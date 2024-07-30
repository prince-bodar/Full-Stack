#include<stdio.h>

int main()
{
   int i=1,j,k=5,n=5;
             do{
				  j=1;
                          do{
							   printf("%d\t",k++);
                               j++;							   
						    }while(j<=i);
				 k=n-=1;		
                 printf("\n");
                 i++;				 
			   }while(i<=5);
	return 0;
}