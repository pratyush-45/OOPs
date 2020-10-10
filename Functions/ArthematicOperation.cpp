// Program to let the user perform arthematic operations
#include <iostream>
using namespace std;

void showChoice ()
{
    cout<<"Enter your choice : \n + for Addition \n - for Subtraction \n x for Multiplication \n / for Division ";
    cout<<"\n";
}

int add (int a, int b)
{
    int sum = a+b;
    return sum;
}

int subtract (int a, int b)
{
    int difference = a-b;
    return difference;
}

int multiply (int a, int b)
{
    int product = a*b;
    return product;
}

int divide (int a, int b)
{
    int quotient = a/b;
    return quotient;
}

int main ()
{
    int a, b, result;
    char c;
    cout<<"Enter the values of a and b \n";
    cin>>a>>b;
    showChoice();
    cin>>c;

    switch (c)
    {
    case '+': result = add(a, b);
        break;
    case '-': result = subtract(a, b);
        break;
    case 'x': result = multiply(a, b);
        break;
    case '/': result = divide(a, b);
        break;
    
    default: cout<<"Please enter a valid operator from the options";
        break;
    }

    cout<<"The result is : "<<result;
}