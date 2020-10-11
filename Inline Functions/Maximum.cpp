// To define an inline function to find maximum number among three inputs
#include<iostream>
using namespace std;

inline int maximum(int a, int b, int c)
{
    return ((a>b)?(a>c?a:c):(a>c?a:c));
}

int main ()
{
    int a, b, c;
    a = 17;
    b = 2;
    c = 57;

    int max = maximum(a, b, c);
    cout<<max;
}