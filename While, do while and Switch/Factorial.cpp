// To find out factorial of a number
#include <iostream>
using namespace std;

int main()
{
    int n, f = 1;
    cout<<"Enter a number \n";
    cin>>n;

    for(int i= 1; i<= n; i++){
        f *= i;
    }

    cout<<"Factorial of "<<n<<" is "<<f;
}