// To check if a number is positive or negative using ternary operator
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number \n";
    cin>>n;

    if(n == 0)
    cout<<"Number cannot be zero";
    else
    (n>0)?cout<<"Positive":cout<<"Negative";

    return 0;
}