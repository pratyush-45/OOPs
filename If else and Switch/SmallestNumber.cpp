// To find smallest among 3 numbers
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter Three numbers \n";
    cin>>a>>b>>c;

    cout<<"Smallest Number is ";
    if (a < b){
        if (a < c)
        cout<<a;
        else
        cout<<c;
    }
    else{
        if (b < c)
        cout<<b;
        else
        cout<<c;
    }
}