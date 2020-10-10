/* To define a template function to add two 
numbers of same or different data types */
#include <iostream>
using namespace std;

template <class T1, class T2>
void add (T1 n1, T2 n2)
{
    cout<<"Addition = "<<n1+n2<<endl;
}

int main ()
{
    cout<<"Adding Integer with Integer : "<<endl;
    add(4, 9);
    cout<<"Adding Float with Float : "<<endl;
    add(1.4, 1.7);
    cout<<"Adding Integer with Float : "<<endl;
    add(4, 1.7);
    
}