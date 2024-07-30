#include<iostream>
using namespace std;
class takedata{
     protected :
     int s1,s2,s3;
     char n1,n2,n3;
     public:
     void enter(){
        cout<<"enter student 1 roll number =  ";
        cin>>s1;
        cout<<"enter student 1 name = ";
        cin>>n1;
        cout<<"enter student 2 roll number =  ";
        cin>>s2;
        cout<<"enter student 2 name = ";
        cin>>n2;
        cout<<"enter student 3 roll number =  ";
        cin>>s3;
        cout<<"enter student 3 name = ";
        cin>>n3;

     }
};
class showdata : public takedata
{
   public :
   void detail (){

   takedata :: enter();
     cout<<"student roll number is "<<s1<<"and name is "<<n1<<endl;
     cout<<"student roll number is "<<s2<<"and name is "<<n2<<endl;
     cout<<"student roll number is "<<s3<<"and name is "<<n3<<endl;
   }
};

int main(){
    showdata s;
    s.detail();
}