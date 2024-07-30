#include<stdio.h>

int main ()
{
int i=1,j=65,k=97;
  while(i<=13)
  {
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
  }
return 0 ;
} 