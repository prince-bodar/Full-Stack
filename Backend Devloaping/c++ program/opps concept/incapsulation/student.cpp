#include<iostream>
using namespace std;
class student{
    private:
    int admin;
    char name[20];
    float eng,maths,sci,total;
    float ctotal()
    {
        return maths+eng+sci;
    }
    public:
    void takedata(){
        cout<<"enter admin number =";
        cin>>admin;
        cout<<"enter name =";
        cin>>name;
        cout<<"enter marks of maths =";
        cin>>maths;
        cout<<"enter marks of  english =";
        cin>>eng;
        cout<<"enter marks of science =";
        cin>>sci;

        total = ctotal();

    }
    void showdata()
    {
        cout<<"\n\nadmin number is = "<<admin<<endl;
        cout<<"name is = "<<name<<endl;
        cout<<"maths marks is = "<<maths<<endl;
        cout<<"english marks is = "<<eng<<endl;
        cout<<"science marks is = "<<sci<<endl;
        cout<<"total  marks is = "<<total<<endl;
        cout<<"percenteges = "<<total/3<<endl;
    }
};
int main(){
    student s;
    s.takedata();
    s.showdata();

} 