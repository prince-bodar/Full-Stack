#include<iostream>
using namespace std;

 class batsman{
        int bcode;
        char name[20];
        int innings,notout,runs;
        float avg;
        float batavg()
        {
            return runs/innings;
        }
        public:
        void takedata(){
            
            cout<<"enter batsman 4 digit code = "<<endl;
            cin>>bcode;
            cout<<"name of batsman = "<<endl;
            cin>>name;
            cout<<"enter batsman innigs = "<<endl;
            cin>>innings;
            cout<<"enter batsman hitting runs ="<<endl;
            cin>>runs;
            cout<<"how many times batsman in not out situation = "<<endl;
            cin>>notout;
            
             avg = batavg();

        }
       
        void readdata(){
            cout<<"Batsman code is : "<<bcode<<endl;
            cout<<"Batsman name is : "<<name<<endl;
            cout<<"Batsman inning is : "<<innings<<endl;
            cout<<"Batsman runs is : "<<runs<<endl;
            cout<<"Batsman notout time is : "<<notout<<endl;
            cout<<"Batsman average is : "<<avg<<endl;
        }

    };
    int main()
    {
        batsman b;
        b.takedata();
        b.readdata();
    }