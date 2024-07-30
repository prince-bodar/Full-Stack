#include<stdio.h>
int main()
{
  int a[5][5]={{1,0,0,0,0},{0,1,0,0,0},{0,0,1,0,0},{0,0,0,1,0},{0,0,0,0,1}},j,i;
  /*
  for(i=0;i<5;i++)
  {
     for(j=0;j<5;j++)
	   {
	     printf("enter the value [%d][%d] = ",i,j);
		 scanf("%d",&a[i][j]);
	   }
  }*/
  
    for(i=0;i<5;i++)
   {
       for(j=0;j<=i;j++)
	   {
	 	 printf("%d",a[i][j]);
	   }
	   printf("\n");
   }
  return 0;
}