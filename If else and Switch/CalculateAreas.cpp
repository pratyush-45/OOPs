//To calculate areas for various shapes
#include <iostream>
using namespace std;

int main() 
{
    char c;
    cout<<"Enter your choice : \n S for Square \t C for circle \t R for rectangle \n";
    cin>>c;

    switch (c)
    {
    case 'S' :
    int s;
    cout<<"Enter side of the square \n";
    cin>>s;
    cout<<"Area of the square is : "<< s*s;
        break;
    
    case 'C' :
    double r;
    cout<<"Enter Radius of Circle \n";
    cin>>r;
    cout<<"Area of Circle is : "<<3.14*r*r;
        break;

    case 'R' :
    int l, b;
    cout<<"Enter Length and Breadth of the REctangle \n";
    cin>>l>>b;
    cout<<"Area of Rectangle is : "<<l*b;
        break;
    
    default:
    cout<<"Enter a valid option";
        break;
    }
}