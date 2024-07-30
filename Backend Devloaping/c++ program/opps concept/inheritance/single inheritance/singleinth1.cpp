#include<iostream>
using namespace std;
class runs{
     protected:
     int virat,dhoni;
     public:
     void player(){
        cout<<"enter virat runs = ";
        cin>>virat;
        cout<<"enter dhoni runs = ";
        cin>>dhoni;

     }     
};

class score : public runs {
      public : 
      void scoreborad(){
        runs:: player();
        float total;
        cout<<"virat score : "<<virat<<endl;
        cout<<"m s dhoni score : "<<dhoni<<endl;

        cout<<"total score of board : "<<virat+dhoni<<endl;
        cout<<"palyer averages runs : "<<virat+dhoni/2<<endl;



    
      }
};

int main(){
    score s;
    s.scoreborad();
}