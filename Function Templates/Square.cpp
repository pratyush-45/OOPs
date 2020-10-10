/* Program to find square of a number of any 
valid data type using function templates */
#include <iostream>
using namespace std;

template <class T>
void square (T num)
{
    cout<<num*num<<endl;
}

int main ()
{
    square(4);
    square('C');
    square(7.9);
}
