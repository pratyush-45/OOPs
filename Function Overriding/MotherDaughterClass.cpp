/* To define a mother and daughter classes to 
display overriding of base class function */
#include<iostream>
using namespace std;

class Mother 
{
    public:
        void display()
        {
            cout<<"Display function in Mother class "<<endl;
        }
};

class Daughter : public Mother
{
    public:
        void display()
        {
            cout<<"Display function in Daughter class "<<endl;    
            cout<<"Now calling Base class function : "<<endl;
            Mother::display(); 
        }
};

int main()
{
    Daughter d;
    // Accessing display() from Daughter class i.e Child Class
    d.display(); 
    
}