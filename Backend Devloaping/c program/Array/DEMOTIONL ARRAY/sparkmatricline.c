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
  
   int sum1,sum2,sum3;
   /*  
       123      1+2+3 = sum1
	   456      4+5+6 = sum2
	   789      7+8+9 = sum3
   */
   
   sum1= arr[0][0]+arr[0][1]+arr[0][2];
   printf("the sum1 is %d",sum1);
   printf("\n");

   sum2= arr[1][0]+arr[1][1]+arr[1][2];
   printf("the sum2 is %d",sum2);
   printf("\n");
   
   sum3= arr[2][0]+arr[2][1]+arr[2][2];
   printf("the sum3 is %d",sum3);
   printf("\n");
   
   int sum4,sum5,sum6;
   
   /*
     123   sum4 = 1+4+7
	 456   sum5 = 2+5+8
	 789   sum6 = 3+6+9
   */
   
   sum4= arr[0][0]+arr[1][0]+arr[2][0];
   printf("the sum4 is %d",sum4);
   printf("\n");
   
   sum5= arr[0][1]+arr[1][1]+arr[2][1];
   printf("the sum5 is %d",sum5);
   printf("\n");
	
   sum6= arr[0][1]+arr[1][1]+arr[2][1];
   printf("the sum6 is %d",sum6);
   printf("\n");
  
   
  return 0;
}