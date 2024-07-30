#include<stdio.h>
int main()
{
   int a[3][3],i,j;
   
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
	  {
	     printf("enter the value [%d][%d] = ",i,j);
		 scanf("%d",&a[i][j]);
	  }
   }
   
    for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
	  {
	   printf("transpose matrix %d \n",a[j][i]);
	  }
   }

  return 0 ;
}