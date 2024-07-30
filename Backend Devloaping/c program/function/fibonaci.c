#include<stdio.h>
int fibonaci(int n)
{
  return n<=1?n:fibonaci(n-1)+fibonaci(n-2);
}

int main()
{
	int n,i;
	printf("enter the value of n = ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   printf("%d",fibonaci(i));
	}
}
