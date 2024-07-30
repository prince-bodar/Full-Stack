#include<stdio.h>

int main()
 {
   // WAP and print N to 1 numeber using by dowhile loop

    int i,n;
      printf("Enter any numeber = ");
      scanf("%d",&n);
	  i=n;
            do{
			    printf("%d\t",i--);
				
			  }while(i>=1);
   return 0;			  
 }