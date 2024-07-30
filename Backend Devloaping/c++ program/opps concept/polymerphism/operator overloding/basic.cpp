#include<iostream>
using namespace std;
class Box{
    int l,b,h;
      public:
      int volume(){
        return l*b*h;
      }

      void setdata(int x,int y,int z){
        x = l , y = b, z = h;
      }
  Box operator+(Box &n)
  {
    Box t;
    t.l = l + n.l;
    t.b = b + n.b;
    t.h = h + n.h;
    return t;
  }
     Box operator++(){
    Box t;
    t.l = ++l;
    t.b = ++l;
    t.h = ++h;
    return t;
  }


};

int main(){
    Box a,b,c,d;
    a.setdata(2,2,2);
    cout<<"volume a is : "<<a.volume()<<endl;
    b.setdata(3,3,3);
    cout<<"volume b is : "<<b.volume()<<endl;
    
    c = a+b;
     cout<<"volume c is : "<<c.volume()<<endl;
  
    d = ++a;
     cout<<"volume d is : "<<d.volume()<<endl;

}