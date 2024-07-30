#include<stdio.h>
int main()

{
int i,j,k,a,b,c;
for(i=1;i<=5;i++)
   {
      for(j=5;j>=i;j--)
	   {
	     printf(" ");
	   }
	  for(k=1;k<=i;k++)
	   {
	     printf(" *");
	   }
	   printf("\n");
   }
for(a=2;a<=5;a++)
   {
      for(b=1;b<=a;b++)
	    {
	    printf(" ");
	    }
	  for(c=5;c>=a;c--)
	    {
	     printf(" *");
	    }
		printf("\n");
   }
 return 0;   
}