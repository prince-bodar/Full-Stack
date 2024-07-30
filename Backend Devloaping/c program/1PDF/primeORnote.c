#include<stdio.h>

int main ()
{
  int a[10],i,j,count=0;
    
	for(i=0;i<10;i++)
	{
		printf("enter any value [%d] =");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<10;i++)
	{
		count=0;
		  for(j=2;j<10;j++)
		  {
			  if(a[i]%2==0)
			  {
				  count++;
			  }
		  }
		  if(count==0)
		  {
			  printf("%d is prime number",a[i]);
		  }else
		  {
			 printf("%d is not prime number");
		  }	  
		  
		
	}

return 0;
}