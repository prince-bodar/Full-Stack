#include<stdio.h>

int main ()
{
int i,j;

for(j=1;j<=10;j++)
{
   for(i=1;i<=10;i++)
   {
    if (i%2==1)
	 {
       printf("%d,\t",j);	 
	 }
   }

printf("\n");
}
return 0 ;
}