#include<iostream>
using namespace std;

class base{
   int a;
   protected:
   int b,c;
   public:
   
     void hello(){
        a = 10;
        cout<<"a is : "<<a<<endl;
        cout<<"hello"<<endl;
        cout<<"enter b is :";
        cin>>b;
        cout<<"enter c is :";
        cin>>c;

     }
};

class derived : public base {
        public:
        void world(){
         base ::  hello ();
            cout<<"you enter world function";
            cout<<"b into c is : "<<b*c<<endl;
        }
};

int main()
{
    derived d;
    d.world();
    
     
}