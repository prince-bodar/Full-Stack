#include<stdio.h>
int main()
{
  int i,j,a[10],count=0;
    for(i=0;i<10;i++)
	{
	  printf("Enter any number [%d]",i);
	  scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
	  count=0;
	      for(j=2;j<=10;j++)
		  {
		     if(a[i]%j==0)
			   {
		        count++;
			   }
		  }
		 if(count==0)
           {
		     printf("%d is prime number \n",a[i]);
		   }else
           {
		     printf("%d is not prime number \n",a[i]);
		   }		   
	}
	return 0 ;
}