#include<stdio.h>

int main ()
{
int i,j;

for(j=1;j<=13;j++)
{
   for(i=65;i<=90;i++)
   {
    if (i%2==1)
	 {
       printf("%c\n",i);	 
	 }
   }

printf("\n");
}
return 0 ;
