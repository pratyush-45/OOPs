// To create class Account with data members and function mumbers
#include <iostream>
using namespace std;

class Account
{
    int accno;
    string name;
    float balance;
    public :
        void getdata ()
        {
            cout<<"Enter your Account No. : "<<endl;
            cin>>accno;
            cout<<"Enter your Name : "<<endl;
            cin>>name;
            cout<<"Enter your Current Balance : "<<endl;
            cin>>balance;
        }
        void deposit (float money)
        {
            balance += money;
        }
        void withdraw (float money)
        {
            balance -= money;
        }
        void display ()
        {
            cout<<"Account No. : "<<accno<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Current Balance : "<<balance<<endl;
        }
};

int main ()
{
    Account A1;
    A1.getdata();
    A1.deposit(1200);
    A1.withdraw(800);
    A1.display();
}
