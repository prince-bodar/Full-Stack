#include<iostream>
using namespace std;
class head{
    public:
    
    void headname(){
      cout<<"==================================================================================================\n";
      cout<<"|                                     JAPTO DHOSA                                                |\n";
      cout<<"==================================================================================================\n";
      cout<<"==================================================================================================\n";
      cout<<"|                                  WELCOME TO OUR RESTAURANT                                     |\n";
      cout<<"==================================================================================================\n";
    }
    void menu (){
      cout<<"|                                 MENU OF ITEMS                                                  |\n";
      cout<<"|   1 => Sada    dhosa   PRICE =>  100 RUPPE                                                     |\n";
      cout<<"|   2 => chinese dhosa   PRICE =>  130 RUPPE                                                     |\n";
      cout<<"|   3 => paper   dhosa   PRICE =>  170 RUPPE                                                     |\n";
      cout<<"|   4 => Masala  dhosa   PRICE =>  190 RUPPE                                                     |\n";
      cout<<"|   5 => chiz    dhosa   PRICE =>  250 RUPPE                                                     |\n";
      cout<<"|                                                                                                |\n";
      cout<<"|  SELECT ANY ITEMS                                                                              |\n";

    }
    protected:
        int f,piece;
    public:
    void SELECT()
    {
   
        cout<<"|================================================================================================|\n";
        cout<<"|  enter your item number in 1to5 = "; 
        cin>>f; 
       
   
        cout<<"|                                                                                                 |\n";
        cout<<"|  how many piece you will eat = ";
        cin>>piece;
    }

};
class detail: public head{
  protected:
      string name;
      string phonenumber;
      public:
      void personal(){
        cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
        cout<<"|  enter your name        = "; cin>>name;
        cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
        cout<<"|  enter your 10 digit mobile number ="; cin>>phonenumber;
        cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
        cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
        cout<<"|=================================================================================================|\n";
        cout<<"|=================================================================================================|\n";
        cout<<"|=================================================================================================|\n";

       

      }
};

class yourbill:public detail{
     protected:
     float gst=0.09,totalbill;
     public:
     void bill(){
      cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
      cout<<"|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
      cout<<"|   costumer name   is :  "<<name<<"                                                           \n";
      cout<<"|                                                                                                    \n"; 
      cout<<"|   costumer mobile number is :     = "<<phonenumber<<"                                                  \n"; 
      cout<<"|                                                                                                    \n";
        int  bill,price,g;
          g = f;
        switch (g)
        {
            case 1:
            price = 100;
            break;

            case 2:
            price = 130;
            break;
            
            case 3:
            price = 170;
            break;
            
            case 4:
            price = 190;
            break;
            
            case 5:
            price = 250;
            break;

            default :
            cout<<"you enter only 1 to 5 number = ";

        }
       bill = gst*(piece*price);
       cout<<"|   YOUR  GST IS  : "<<bill;
       cout<<"\n|                                                                                                    \n"; 
       cout<<"|   YOUR BILL IS :"<<piece*price;
       cout<<"\n|                                                                                                    \n"; 
       cout<<"\n|   YOUR TOTAL BILL WITH GST IS  :  "<<(piece*price)+bill;
       cout<<"\n-------------------------------------------------------------------------------------------------\n";
       cout<<"                           THANKS FOR VISIT OUR RESTAURANT                                           ";
       cout<<"\n-------------------------------------------------------------------------------------------------\n";


     }
};
int main (){
   yourbill y;
   y.headname();
   y.menu();
   y.SELECT();
   y.personal();
   y.bill();

}