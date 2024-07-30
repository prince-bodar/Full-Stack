#include<stdio.h>

int main()
{ 
 int i=1,n,a=0,b=1,c;
   scanf("%d",&n);
   printf("%d",b);
 
      while(i<=n)
     {
      c=a+b;
      printf("%d\t",c);
      a=b;
      b=c;
	  i++;
      }
 
   return 0;
}