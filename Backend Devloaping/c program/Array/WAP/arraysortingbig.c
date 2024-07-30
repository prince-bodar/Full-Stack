
#include<stdio.h>
int main()
{
  int a[10],i,j,temp;
    for(i=0;i<10;i++)
	{
	  printf("Enter any value = ");
	  scanf("%d",&a[i]);
	}
	 
	 for(i=0;i<10;i++)
	 {
	     for(j=0;j<10;j++)
		 {
		     if(a[i]<a[j])
			 {
			    temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			 }
		 }
	 }
	   for(i=9;i>=0;i--)
          {
		    printf("%d\t",a[i]);
		  }	
	return 0;
}