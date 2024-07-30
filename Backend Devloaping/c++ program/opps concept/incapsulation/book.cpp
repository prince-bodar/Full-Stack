#include<iostream>
using namespace std;
class BOOK{
    private:
    int bookno;
    char booktitle;
    float price,copyno;
    float TOTAL_COST(){
        return price*copyno;
    }
    float total;

    public:
    void INPUT(){
        cout<<"enter book number : ";
        cin>>bookno;
        cout<<"enter book title : ";
        cin>>booktitle;
        cout<<"enter book price :";
        cin>>price;
        cout<<"enter book copy:";
        cin>>copyno;

         total = TOTAL_COST();
        
    }

    void PURCHASE(){
        cout<<endl<<"your book number is : "<<bookno<<endl;
        cout<<"your book booktitle is : "<<booktitle<<endl;
        cout<<"your book price is : "<<price<<endl;
        cout<<"your book copy is : "<<copyno<<endl;
        cout<<"your total price  is : "<<total<<endl;


    }

};

int main(){
    BOOK b;
    b.INPUT();
    b.PURCHASE();
}