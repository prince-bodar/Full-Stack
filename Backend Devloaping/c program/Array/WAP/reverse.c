
#include<stdio.h>
int main()
{
  char temp,a[10];
  int i,j;
  
  
    for(i=0;i<10;i++)
	{
	
	  printf("Enter any alphabet = ");
	  scanf("%s",&a[i]);
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
		    printf("%s\t",a[i]);
		  }	
	return 0;
}