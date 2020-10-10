/* To accept the values from a user and initialize the data members 
in a constructor to print the area of rectangle*/
#include <iostream>
using namespace std;

class Area
{
    int len, wid, area;
    public :
        Area(int l, int b) // Parameterized Constructor
        {
            this->len = l;
            this->wid = b;
        }

        void display ()
        {
            area = len * wid;
            cout<<"Area of the Rectangle is : "<<area<<endl;
        }
};

int main ()
{
    Area A1(8, 9);
    A1.display();

    Area A2(5, 3);
    A2.display();
}
