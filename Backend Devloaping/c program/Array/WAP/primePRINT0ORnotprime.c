#include<stdio.h>
int main()
{
   int a[10],i,j,count=0;
     
	  for(i=0;i<10;i++)
	  {
	    printf("Enter the value [%d] = ",i);
		scanf("%d",&a[i]);
	  }
	  
	  for(i=0;i<10;i++)
	  {
	     count=0;
		      for(j=2;j<a[i];j++)
			  {
			     if(a[i]%j==0)
				    {
			          count++;
				    }
			  }
			 if(count==0)
			 {
			     a[i]=0;
			     printf("%d is prime number \n",a[i]);
			 }
			 else
			 {
			     printf("%d is not prime number \n",a[i]);
			 }
	   
	  }
  return 0;
}