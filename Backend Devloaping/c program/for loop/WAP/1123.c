#include<stdio.h>

int main()
{ 
 int i,n,a=0,b=1,c;
   scanf("%d",&n);
   printf("%d",b);
 
     for(i=1;i<=n;i++)
     {
      c=a+b;
      printf("%d\t",c);
      a=b;
      b=c;
      }
 
   return 0;
}