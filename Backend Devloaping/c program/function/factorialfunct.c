#include <stdio.h>

int fact(int n)
{
    return n>0?n*fact(n-1):1;
}

int main()
{
    int n,ans;
    printf("Please Enter the value of number");
    scanf("%d",&n);
    ans = fact(n);
    printf("Factorial of %d is %d",n,ans);
    return 0;
}