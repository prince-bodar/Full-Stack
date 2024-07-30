#include<stdio.h>

int main ()
{
int i,j=65,k=97;
for(i=65;i<=90;i++)
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
  }
return 0 ;
} 