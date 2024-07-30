#include<stdio.h>

int main()
{
 // WAP and print 1,1,2,3,5,8.....n
 
   int i=1,n,a=0,b=1,c;
   printf("Enter any number=");
   scanf("%d",&n);
   printf("%d  ",b );
            do{
                 c=a+b;
                   printf("%d\t",c);
                 a=b;
                 b=c;	
                 i++;			
		      }while(i<=n);

 return 0;
}