//To show day of Week
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Enter a day of week \n 1 for Monday \n 2 for Tuesday \n 3 for Wednesday \n 4 for Thursday \n 5 for Friday \n 6 for Saturday \n 7 for Sunday \n";
    cin>>n;
    switch (n)
    {
    case 1 : cout<<"Monday";
    break;
    case 2 : cout<<"Tuesday";
    break;
    case 3 : cout<<"Wednesday";
    break;
    case 4 : cout<<"Thursday";
    break;
    case 5 : cout<<"Friday";
    break;
    case 6 : cout<<"Saturdy";
    break;
    case 7 : cout<<"Sunday";
    break;
    
    default: cout<<"Enter a valid day of week";
    break;
    }    
}