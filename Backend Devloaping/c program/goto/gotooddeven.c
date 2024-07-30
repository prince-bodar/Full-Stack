#include<stdio.h>

void myodd()
{
   int i;
   next:
     printf("odd function \n");   
   for(i=1;i<=10;i++)
   {
      if(i%2==1)
    {
        printf("%d",i);
    }
   }
   goto next;
}


void myeven()
{
   int i;   
   for(i=1;i<=10;i++)
   {
    if(i%2==0)
    {
        printf("%d",i);
    }
   }
   goto next;
   next:
    printf("\n okay");
}

int main()
{
    int n;
   printf("enter the value of n = ");
   scanf("%d",&n);
   if(n%2==0)
   {
    myeven();
   }else
   {
    myodd();
   }
}
