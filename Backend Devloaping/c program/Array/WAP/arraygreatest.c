#include<stdio.h>
int main()
{
  int a[2],i;
    for(i=0;i<=1;i++)
	{
	  printf("enter the value");
	  scanf("%d",&a[i]);
	}
	if(a[0]<a[1])
	{
	   printf("a[1] is greteast");
	}else
	{
	  printf(" a[0] is greatest");
	}
	return 0 ;
}