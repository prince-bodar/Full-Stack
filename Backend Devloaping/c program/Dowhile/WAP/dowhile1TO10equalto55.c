#include<stdio.h>

int main()
 {
   // WAP 1+2+3+4+5+6+7+8+9+10=55
   
   int i=1,sum=0;
       do{
	       sum= sum+i;
		   i++;
	     }while(i<=10);
   printf("%d",sum);
 
   return 0;
 }
 