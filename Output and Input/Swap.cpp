// Swap two numbers
#include <iostream>
using namespace std;

int main()
{
    int a = 15;
    int b = 37;
    /* Using third variable
    int temp = b;
    b = a;
    a = temp;
    */
    // Without using third variable
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"a = "<<a<<"\t b = "<<b; 

    return 0;
}