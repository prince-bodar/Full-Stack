#include<stdio.h>

int main()
 {
	 //1,4,12,32,80.....n
   int i=1,n,temp=1,a;
   printf("Enter any number=");
   scanf("%d",&n);
    
	 while(i<=n)
	 {
	   a=i*temp;
	   printf("%d\t",a);
	   i++;
	   temp= temp*2;
	 }
   
 }