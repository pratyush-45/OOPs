// To print Fibonacci Series upto n terms
#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cout<<"Enter number of terms in Fibonacci Series \n";
    cin>>n;
    int a= 0, b= 1;
    
    while(n > 0){
        cout<<a<<",";
        if(n == 1)
        break;
        cout<<b<<",";
        a += b;
        b += a;
        n -= 2;
    }
}