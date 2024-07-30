#include<iostream>
using namespace std;

class con{
    public: 
      con()
      {
        cout<<"defualt is calld "<<endl;
      }
      con(int a)
      {
        cout<<"value of a is : "<<a<<endl;
      }
      con(int a,int b)
      {
         cout<<"value of a INTO b equal to : "<<a*b<<endl;
      }
      con(string name){
        name = " my name is bodar prince ";
        cout<<"name : "<<name<<endl;
        
      }
};
int main(){
    con s(10),a(10,20),b("name"),c;
}