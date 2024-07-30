#include<stdio.h>

int main()
{
   int i=1,j,k=65,n=65;
         do{
		      j=1;
			         do{
					       printf("%c",k);
					       j++;
			               k--;
					   }while(j<=i);
			  k=n+=1;
			 printf("\n");
			 i++;
		   }while(i<=5);
    return 0;
}