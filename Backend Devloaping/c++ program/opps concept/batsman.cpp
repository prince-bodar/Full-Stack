#include<iostream>
using namespace std;

 class batsman{
        private:
        int bcode[4];
        char name[20];
        int innings,notout,runs;
        float avg,batavg(){
            return runs/innings;
        }
        public:
        void readata(){
            
            cout<<"enter batsman 4 digit code = ";
            cin>>bcode;
            cout<<"name of batsman = ";
            cin>>name;
            cout<<"enter batsman innigs = ";
            cin>>innings;
            cout<<"enter batsman hitting runs =";
            cin>>runs;
            cout<<"how many times batsman in not out situation = ";
            cin>>notout;  

        }


      };