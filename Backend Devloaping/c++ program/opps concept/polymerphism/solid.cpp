#include<iostream>
using namespace std;

class solid{
    public:
  
     void add()
      {
        cout<<"default"<<endl;
      }

         void add(int a, int b)
    {
        cout<<"addtion of a and b ="<<a+b<<endl;
      
    }
     void add(int a, double b)   
        {
              cout<<"division of a and b ="<<a/b<<endl;
        }
   
     void add(double a, double b)   
        {
              cout<<" of a and b ="<<a*b<<endl;
        }

};
