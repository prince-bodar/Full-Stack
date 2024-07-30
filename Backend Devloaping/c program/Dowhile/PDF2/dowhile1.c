#include<stdio.h>

int main ()
{
     // 1
     // 12
     // 123
     // 1234
    //  12345
int i=1,j;
       do{
	       j=1;
		           do{
				       printf("%d",j);
                       j++;
				     }while(j<=i);
		   printf("\n");
		   i++;
	     }while(i<=5);

return 0;
}