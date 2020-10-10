/* To define a class template to add two 
numbers of same or different data types */
#include<iostream>
using namespace std;

template <class T1, class T2>
class Addition
{
    T1 a;
    T2 b;
    public:
        void add (T1 n1, T2 n2)
    {   
        a = n1;
        b = n2;
        cout<<"Sum = "<<n1+n2<<endl;
    }
};

int main ()
{
    Addition <int,int> ob1;
    cout<<"Adding Integer with Integer : "<<endl;
    ob1.add(4, 9);

    Addition <float,float> ob2;
    cout<<"Adding Float with Float : "<<endl;
    ob2.add(1.4, 1.7);

    Addition <int,float> ob3;
    cout<<"Adding Integer with Float : "<<endl;
    ob3.add(4, 1.7);
}