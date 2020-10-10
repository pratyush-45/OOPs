// To Check if a number is Prime or not
#include <iostream>
using namespace std;

bool checkPrime (int n)
{
    for(int i= 2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main ()
{
    int n;
    cout<<"Enter a Number \n";
    cin>>n;

    if(checkPrime(n))
    cout<<"It is a Prime Number";
    else 
    cout<<"It is not a Prime Number";
}