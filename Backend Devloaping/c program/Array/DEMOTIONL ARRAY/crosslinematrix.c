#include<stdio.h>

int main()
{
  int arr[3][3],i,j;
  
  for(i=0;i<3;i++)
  {
  
      for(j=0;j<3;j++)
	   {
	      printf("enter the value of [%d][%d] = ",i,j);
          scanf("%d",&arr[i][j]);		  
	   }
	   
  }
  
  for(i=0;i<3;i++)
  {
  
     for(j=0;j<3;j++)
	 {
	   printf("%d",arr[i][j]);
	 }
	printf("\n");
  }
    /*
	    123  sum=1+5+9;
		456
		789
	*/
  
   int sum1,sum2;

    sum1= arr[0][0]+arr[1][1]+arr[2][2];
    printf("sum1  is  %d \n",sum1);
	
    sum2= arr[0][3]+arr[1][2]+arr[2][0];
    printf("sum2  is  %d ",sum2);
	
   return 0;
}