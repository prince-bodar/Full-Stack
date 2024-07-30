#include<stdio.h>

int main()

 {
   // WAP and print 1 to N number using dowhlie loop
   
   int i=1,n;
        printf("Enter any number =");
		scanf("%d",&n);
		      
			   do{
			       printf("%d\t",i++);
			     }while(i<=n);
				 
   return 0;
 }