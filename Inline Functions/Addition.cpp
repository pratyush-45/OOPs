// To define an inline function to add two numbers
#include<iostream>
using namespace std;

inline int add(int a, int b)
{
    return a+b;
}

int main ()
{
    int a, b;
    a = 17;
    b = 2;
    int sum = add(a, b);
    cout<<sum;
}