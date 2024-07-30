#include<iostream>
using namespace std;

class member{
    private:
     int flightno;
     char destination[20];
     float distance,fuel, usefuel;
     float clasfuel(){
         if (distance <= 1000)
        {
            fuel = 500;
            cout<<"your usebale fuel is : "<<fuel<<endl;
        } else if (distance <= 2000) 
        {
            fuel = 1100;
            cout<<"your usebale fuel is : "<<fuel<<endl;
        } else 
        {
            fuel = 2200;
            cout<<"your usebale fuel is : "<<fuel<<endl;
        }
          
     }

     public:
     void takedata()
     {
        cout<<"enter flight number : ";
        cin>>flightno;
        cout<<"enter destination of flight : ";
        cin>>destination;
        cout<<"enter distance of flight : ";
        cin>>distance;
        
       usefuel =  clasfuel();

     }

     void showdata(){
         cout<<"\nflight number is : "<<flightno<<endl;
         cout<<"flight destination is :"<<destination<<endl;
         cout<<"flight distance  is :"<<distance<<endl;
         cout<<"flight useblefuel  is :"<<usefuel<<endl;

     }

};
int main()
{
    member m;
    m.takedata();
    m.showdata();
}
