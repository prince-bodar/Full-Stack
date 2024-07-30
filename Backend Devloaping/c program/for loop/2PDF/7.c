#include<stdio.h>

int main ()
{
  int i,j,k=65;
  
   for(i=1;i<=5;i++)
    {
       for(j=1;j<=i;j++)
	   {
	     if(i%2==1)
		 {
		  	 printf("%c",k);
			 k++;
			 
		 }else
		  {
			  printf("%c",k+32);
			  k++;
		  }
	   }
    printf("\n");
    }
return 0;
}