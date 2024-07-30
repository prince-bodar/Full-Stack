#include<stdio.h>

int main()
{
	/*
	A
    AB
    ABC
    ABCD
    ABCDE
	*/
  int i=1,j;
            do{
			      j=1;
				      do{
					      printf("%c",j+64);
						  j++;
					    }while(j<=i);
                  printf("\n");
				  i++;
			   }while(i<=5);
    return 0;
}