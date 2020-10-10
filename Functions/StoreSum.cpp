// To pass three variables by call by reference and store sum of two into third variable
#include <iostream>
using namespace std;

void storeSum (int &a, int &b, int &c)
{
    c = a + b;
}

int main ()
{
    int a, b, c;
    cout<<"Enter values of First and Second Variables \n";
    cin>>a>>b;
    storeSum(a, b, c);
    cout<<"Value of Third Variable : "<<c;
}