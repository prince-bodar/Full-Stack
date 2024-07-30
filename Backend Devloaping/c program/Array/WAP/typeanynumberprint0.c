#include<stdio.h>
int main()
{
  int a[10],i;
    for(i=0;i<10;i++)
	{
	  printf("Enter any value = ");
	  scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{
	  a[i]=0;
	  printf("%d\t",a[i]);
	}
  return 0;
}