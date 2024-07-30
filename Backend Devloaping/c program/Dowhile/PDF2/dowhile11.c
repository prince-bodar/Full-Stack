#include<stdio.h>

int main()
{
   int i=1,j,k=1;
         do{
		       j=1;
			           do{
					        printf("%d\t",k);
                                 if(k==0)
								      {
									    k=1;
									  }else
									  {
									    k=0;
									  }
						   j++;   
						 }while(j<=i);
			 printf("\n");
			 i++;
		   }while(i<=5);
    return  0;
}