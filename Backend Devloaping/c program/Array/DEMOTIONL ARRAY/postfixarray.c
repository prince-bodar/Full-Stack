#include<stdio.h>
int main()
{
   int a[3][3],i,j,count=0;
   
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
	   {
	      printf("Enter the value of [%d][%d]",i,j);
		  scanf("%d",&a[i][j]);
	   }
   
   }
   
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
	   {
	     
		      if(0<a[i][j])
			  {
				  printf("%d\n",a[i][j]);
			  }else
			  {
			     count++;
			  }	 
	   }
   }
      printf("total time return = %d",count);
   return 0;
}