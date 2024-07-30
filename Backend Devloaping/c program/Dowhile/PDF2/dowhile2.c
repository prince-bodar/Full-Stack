#include<stdio.h>

int main()
{
	/* 1
       22
       333
       4444
       55555
	*/
  int i=1,j;
      do{
	      j=1;
		        do{
				    printf("%d",i);
					j++;
				  }while(j<=i);
		  printf("\n");
		  i++;
		}while(i<=5);
    return 0;
}