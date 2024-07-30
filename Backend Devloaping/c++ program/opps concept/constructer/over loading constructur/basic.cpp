#include<iostream>
using namespace std;

class test{
    public:
    test()
    {
        cout<<"defualt consturcter is called"<<endl;
    }
    test(int x)
    {
        cout<<"squre of this value is :"<<x*x<<endl;
    }
    test(int x,int y)
    {
        cout<<"addition of this value is = "<<x+y<<endl;
    }
    test(char x)
    {
        cout<<"charecter is : "<<x<<endl;
    }
};

  int main()
   {
      test a,c(2),d(30,23),b('p');
   }

   // volume of solid shape
   //area of various shape