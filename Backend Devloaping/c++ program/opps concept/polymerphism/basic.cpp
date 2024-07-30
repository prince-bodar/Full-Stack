// overloading function
#include <iostream>
using namespace std;

class basic{
    public:

      void add()
      {
        cout<<"default"<<endl;
      }
    // Function to add two integers
    void add(int a, int b)
    {
        cout<<"addtion of a and b ="<<a+b<<endl;
      
    }

// Overloaded function to add three integers
      void add(int a, int b, int c)   
        {
              cout<<"addtion of a,b and c ="<<a+b+c<<endl;
        }
};

int main()
{
    basic b;
    b.add();
    b.add(20,33);
    b.add(34,56,77);
}