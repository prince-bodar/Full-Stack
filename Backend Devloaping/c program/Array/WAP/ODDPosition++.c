#include<stdio.h>
int main()
{
   int a[10],i,sum = 0;
    for(i=0;i<10;i++)
	  {
	     printf("Enter any value = ");
		 scanf("%d",&a[i]);
	  }
	 for(i=0;i<10;i++)
	 {
	     if(i%2==1)
		 {
		    sum = sum+a[i];
		 }
		 
	 }
	 printf("%d\t",sum);
	 
   return	0; 
}