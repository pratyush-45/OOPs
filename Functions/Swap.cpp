// To show the difference between call by value and call by address in a user defined function
#include <iostream>
using namespace std;

// Function to swap two numbers by calling the values of the two variables
void swapByCallByValue (int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// Function to swap two numbers by calling the address of the two variables
void swapByCallByAddress (int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main ()
{
    int a = 100, b = 50;
    cout<<"Initial values of a and b are \n a = "<<a<<"   b = "<<b<<"\n";

    swapByCallByValue(a, b); // calling by value
    cout<<"Values of a and b after passing by value are \n a = "<<a<<"   b = "<<b<<"\n";

    swapByCallByAddress(a, b); // calling by address
    cout<<"Values of a and b after passing by address are \n a = "<<a<<"   b = "<<b<<"\n";
}