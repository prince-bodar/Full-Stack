#include<iostream>
using namespace std;

int main()
{
   int i;

   cout<<"enter any value = ";
   cin>>i;

   (i%3==0||i%5==0||i%7==0)?
   cout<<"this value divided by 3or5or7":
   cout<<"this value is not divided";
   return 0;
   

}