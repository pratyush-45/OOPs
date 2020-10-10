// To create a class and define two member functions - showNum() & dispNum()
#include <iostream>
using namespace std;

class Number
{
    int n1, n2;
    public:
        void setData (int n)
        {
            n1 = n;
            n2 = n;
        }
        void showNum()
        {
            cout<<n1<<endl;
        }
        void dispNum ()
        {
            cout<<this->n2<<endl;
        }
};

int main ()
{
    Number N1, N2;
    N1.setData(4);
    N1.showNum();
    N1.dispNum();

    N1.setData(5);
    N1.showNum();
    N1.dispNum();
}