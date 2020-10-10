// To check if an Year is a leap year or not
#include <iostream>
using namespace std;

bool checkYear(int x);
int main()
{
    int year;
    cout<<"Enter a Year \n";
    cin>>year;

    bool leap;
    if (year % 4 == 0){
        if (year % 100 == 0){
            if (year % 400 == 0)
            leap = true;
            else 
            leap = false;
        }
        else
        {
            leap = true;
        }
    }
    else
    {
        leap = false;
    }

    if (leap)
    cout<<"Leap Year";
    else
    cout<<"Not a Leap Year";
}