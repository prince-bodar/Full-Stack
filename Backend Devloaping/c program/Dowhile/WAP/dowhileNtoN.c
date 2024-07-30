#include<stdio.h>

int main()
 {
    // WAP and print -N to N number using dowhile loop
	  
    int i,n;
	  printf("Enter any number =");
	  scanf("%d",&n);
	  i=-n;
	        do{
			     printf("%d\t",i++);
			  }while(i<=n);
    return 0;
 }