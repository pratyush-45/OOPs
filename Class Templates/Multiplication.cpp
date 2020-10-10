/* To define a class template to multiply two 
numbers of same or different data types */
#include<iostream>
using namespace std;

template <class T1, class T2>
class Multiplication
{
    T1 a;
    T2 b;
    public:
        void multiply (T1 n1, T2 n2)
    {   
        a = n1;
        b = n2;
        cout<<"Product = "<<n1*n2<<endl;
    }
};

int main ()
{
    Multiplication <int,int> ob1;
    cout<<"Multiplying Integer with Integer : "<<endl;
    ob1.multiply(4, 9);

    Multiplication <float,float> ob2;
    cout<<"Multiplying Float with Float : "<<endl;
    ob2.multiply(1.4, 1.7);

    Multiplication <int,float> ob3;
    cout<<"Multiplying Integer with Float : "<<endl;
    ob3.multiply(4, 1.7);
}