/*
    constructor =>   => class name and function name both are same.
                     => automatically called itself after creating object.
                     => no return type and no return value.
                     =>always in public section.
                     => Types ->Defualt ,parameterized,copy.
*/

#include<iostream>
using namespace std;

class Test{
    int z;
    public:
    Test()// Default consterctor
    {
        cout<<"Default consterctor is cllaed";
    }
    Test(int x) //perameterized constructor
    {
        z=x;

            cout<<"perameterized Constructor is called"<<endl<<"Value of x is:"<<z<<endl;
    }
    Test(Test &x) //copy constructor
    {
        int m = x.z;
        cout<<"copy constuctor is called"<<endl
             <<"value of x is = "<<m<<endl;
        
    }
    void Hello()
    {
        cout<<"Hello World....";
        
    }
};
int main()
{
    Test b,a(10),t(a);
}