#include<stdio.h>

int main()
{ 
 int i,n,temp=1,b;
 scanf("%d",&n);
 
 for(i=1;i<=n;i++)
 {
	 b= i*temp;
	 temp*=2;	
	 printf("%d\t",b);

 }
 
	return 0;
}