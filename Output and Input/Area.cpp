// To print area of a circle and triangle
#include <iostream>
using namespace std;

int main()
{   
    double r, h, b, areaCircle, areaTriangle; 
     
    cout<<"Enter Radius of Circle \n";
    cin>>r;
    areaCircle = 3.14 * r * r;
    cout<<"Area of Circle = "<<areaCircle<<"\n";

    cout<<"Enter Height of Triangle \n";
    cin>>h;
    cout<<"Enter Base of Triangle \n";
    cin>>b;
    areaTriangle = h * b / 2;
    cout<<"Area of Triangle = "<<areaTriangle; 

    return 0;
}