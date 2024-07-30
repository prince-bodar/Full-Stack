#include<stdio.h>

int main()
 {
   int a=0,b=1,c;
   
     while(c<=10)
	  {
	    c=a+b;
	    printf("%d",c);
	    a=b;
        b=c;	   
	  }
 
 }