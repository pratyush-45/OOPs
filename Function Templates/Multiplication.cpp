/* To define a template function to multiply 
two numbers of same or different data types */
#include <iostream>
using namespace std;

template <class T1, class T2>
void multiply (T1 n1, T2 n2)
{
    cout<<"Multiplication = "<<n1*n2<<endl;
}

int main ()
{
    cout<<"Multiplying Integer with Integer : "<<endl;
    multiply(4, 9);
    cout<<"Multiplying Float with Float : "<<endl;
    multiply(1.4, 1.7);
    cout<<"Multiplying Integer with Float : "<<endl;
    multiply(4, 1.7);
    
}