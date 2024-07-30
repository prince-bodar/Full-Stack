#include<iostream>
using namespace std;
class test{
   // by defult privat
   int a;// data number
   public:
   void hello()
   {
    a=101;
    cout<<"value of a is = "<<a<<endl;
    cout<<"hello world ";
   }
};

int main()
{
    test t;//t is object;
    t.hello();
}