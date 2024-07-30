#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
	
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
		  {
		    printf("enter the value of a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		  }
	}
	
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
		  {
		    printf("enter the value of b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		  }
	}
	
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
		  {
		   c[i][j]= a[i][j]+b[j][i];
		  }
	}
	
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
		  {
		    printf("\n  a + b  = %d ",c[i][j]);
			
		  }
	}
	
	return 0 ;
}