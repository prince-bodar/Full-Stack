#include<stdio.h>

int main ()
{
int a;
scanf("%d",&a);
(a%3==0 && a%5==0 && a%7==0)?printf("this value is  divide by 3,5and7"):printf("this value is note divide by 3,5and7");

return 0 ;
}