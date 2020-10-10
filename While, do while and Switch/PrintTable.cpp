// To print table of a number
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout<<"Enter a number \n";
    cin>>n;

    cout<<"Table of "<<n<<" is : \n";
    for(int i= 1; i<= 10; i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<"\n";
    }
}