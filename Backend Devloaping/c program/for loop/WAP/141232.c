#include<stdio.h>

int main ()
{
int i,n,temp=2;
scanf("%d",&n);

for (i=1;i<=n;i++)
  {
     printf("%d\n",i*i);
	 temp=i*i;
  }
return 0;
}