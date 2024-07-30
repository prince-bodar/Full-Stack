#include<stdio.h>

int main()
{
   int a,n;
   printf("Enter the value of number\n");
   scanf("%d",&n);
   a=n;
   //print N to 1
   
      while(a>=1)
	  {
	    printf("%d\t",a--);
	  }
 return 0 ;
}