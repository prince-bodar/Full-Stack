#include<iostream>
using namespace std;
class base1{
    protected:
    int a ;
    public :
   int setA (int x)
   {
        a = x;
   }
};
class base2 : public base1{
    protected:
    int b ;
    public :
   int setB (int x)
   {
        b =x;
   }
};
class test :public base2
{
    public:
    int product(){
    return a*b;
    }
};

int main (){
    test t;
    t.setA(10);
    t.setB(12);
    cout<<"product A and B is : "<<t.product()<<endl;
}
