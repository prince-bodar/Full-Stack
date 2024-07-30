#include<stdio.h>
int main()
{
 int a[10],i,sum=0;
   for(i=0;i<10;i++)
   {
      printf(" Enter the value = ");
	  scanf("%d",&a[i]);
   }
   for(i=0;i<10;i++)
   {
     if(i%2==0)
	   {
	     sum+=a[i];
	   }
   }
   printf("%d",sum);
   return 0;
}