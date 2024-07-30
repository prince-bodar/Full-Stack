#include<stdio.h>

int main()
{
	/*
	5
    5       4
    5       4       3
    5       4       3       2
    5       4       3       2       1
	*/
  int i=5,j;
    
	      do{
		       j=5;
			        do{
					      printf("%d\t",j);
						  j--;
					  }while(j>=i);
		        printf("\n");
				i--;
		    }while(i>=1);
	return 0;
}