// To Demonstrate passing of objects in a class
#include <iostream>
using namespace std;

class Calculator
{
    float num;
    public:

        void setData(float n)
        {
            num = n;
        }
        
        void getData()
        {
            cout<<num<<endl;
        }

        void add(Calculator N1, Calculator N2)
        {
            this->num = N1.num + N2.num;
        }

        void subtract(Calculator N1, Calculator N2)
        {
            this->num = N1.num - N2.num;
        }

        void multiply(Calculator N1, Calculator N2)
        {
            this->num = N1.num * N2.num;
        }

        void divide(Calculator N1, Calculator N2)
        {
            this->num = N1.num / N2.num;
        }
};

int main ()
{
    Calculator N1, N2, N3;
    N1.setData(12);
    N2.setData(7);
    cout<<"Values of N1 and N2 are : \n";
    N1.getData();
    N2.getData();

    N3.add(N1, N2);
    cout<<"Addition of N1 and N2 : \n";
    N3.getData();

    N3.subtract(N1, N2);
    cout<<"Subtraction of N1 and N2 : \n";
    N3.getData();

    N3.multiply(N1, N2);
    cout<<"Multiplication of N1 and N2 : \n";
    N3.getData();

    N3.divide(N1, N2);
    cout<<"Division of N1 and N2 : \n";
    N3.getData();
}