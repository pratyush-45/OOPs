// To create a class Max and display returning of an Object
#include <iostream>
using namespace std;

class Max
{
    int v;
    public:
        void getV()
        {
            cout<<"Enter a number : ";
            cin>>v;
            cout<<endl;
        }

        void display()
        {
            cout<<v<<endl;
        }

        Max check (Max N)
        {
            if(this->v > N.v)
            return *this;
            else 
            return N;
        }
};

int main ()
{
    Max N1, N2, N3;

    N1.getV();
    N2.getV();
    N3 = N2.check(N1);

    cout<<"Value of N1 : ";
    N1.display();

    cout<<"Value of N2 : ";
    N2.display();

    cout<<"Value of N3, i.e maximum among N1 and N2 : ";
    N3.display();
}