// To check if a number is Armstrong or not
#include <iostream>
using namespace std;

int main()
{
    int n, x = 0,temp;
    cout<<"Enter a number \n";
    cin>>n;
    temp = n;

    while(temp != 0){
        int digit = temp % 10;
        x += digit*digit*digit;
        temp = temp/10;
    }

    if(n == x)
    cout<<"It is an Armstrong Number";
    else 
    cout<<"It is not an Armstrong Number";
}