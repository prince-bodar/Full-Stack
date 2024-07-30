#include<stdio.h>

int main()
{
	/*
	   5
       44
       333
       2222
       11111
	*/
  int i=5,j;
        do{
		     j=5;
		          do{
				      printf("%d",i);
					  j--;
					}while(j>=i);
			printf("\n");
			i--;
		  }while(i>=1);
     return 0;
}