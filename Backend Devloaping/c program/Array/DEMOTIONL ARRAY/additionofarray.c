#include<stdio.h>
int main()
{
  int a1[2][2],a2[2][2],a3[2][2],j,i;
  
   for(i=0;i<2;i++)
     {
         for(j=0;j<2;j++)
	       {
	         printf("Enter the value of a1[%d][%d] =",i,j);
		     scanf("%d",&a1[i][j]);
	       }
     }
	 
   for(i=0;i<2;i++)
     {
		for(j=0;j<2;j++)
		{
		   printf("enter the value of a2 [%d][%d] = ",i,j);
		   scanf("%d",&a2[i][j]);
		}
	 }
	 
   for(i=0;i<2;i++)
     {
		 for(j=0;j<2;j++)
		 {
			 a3[i][j]=a1[i][j]+a2[i][j];
	     }
	     
     }	
  	 
   for(i=0;i<2;i++)
     {
		 for(j=0;j<2;j++)
		 {
			 printf("a1 + a2 is = %d\n",a3[i][j]);
		 }
	     
     }	   
  
  
  return 0;
}