#include<stdio.h>

int main ()
{
int i,n;
printf("enter any number");
scanf("%d",&n);

for(i=-n;i<=n;i++)
{
    printf("%d\n",i);
}
return 0;
}