/* Program to find square of a number of any 
valid data type using class templates */
#include <iostream>
using namespace std;

template <class T>
class Square
{
    public: 
        void square (T num)
        {
            cout<<num*num<<endl;
        }
};

int main ()
{
    Square<int> ob1;
    ob1.square(4);
    Square<char> ob2;
    ob2.square('C');
    Square<float> ob3;
    ob3.square(7.9);
}