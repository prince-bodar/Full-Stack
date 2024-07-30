#include<iostream>
using namespace std;
int fibonaci(int n)
{
    n=1?n:fibonaci(n-1)+fibonaci(n-2);
}
int main()
{
    int n,i;
    cout<<"enter the value of n =";
    cin>>n;

    for(i=1;i<=n;i++)
    {
          cout<<(fibonaci(i));
    }
}