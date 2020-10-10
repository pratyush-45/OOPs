/* To create a class Product and define data 
members using scope resolution operator */
#include <iostream>
using namespace std;

class Product
{
    int pid;
    string pname;
    float amount;
    public:
        void acceptProduct();
        void displayProduct();
    ~Product()
    {
        cout<<"Destructor has been invoked "<<endl;
    }
};

void Product:: acceptProduct ()
{
    cout<<"Enter Product ID : ";
    cin>>pid;
    cout<<"Enter Product Name : ";
    cin>>pname;
    cout<<"Enter Product Price : ";
    cin>>amount;
    cout<<endl;
}

void Product:: displayProduct ()
{
    cout<<"Product ID : "<<pid<<endl;
    cout<<"Product Name : "<<pname<<endl;
    cout<<"Product Price : "<<amount<<endl;
}

int main ()
{
    Product P;
    
    P.acceptProduct();
    P.displayProduct();
}