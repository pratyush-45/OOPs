/* To display operator overloading by defining a class which 
performs unary increment and decrement on complex numbers */
#include<iostream>
using namespace std;

class Complex
{
    int real, img;
    public :
        Complex(int r=0, int i=0)
        {
            real = r;
            img = i;
        }
        void display ()
        {
            cout<<real<<"i + "<<img<<endl;
        }
        Complex operator++()
        {
            Complex T;
            T.real = this->real + 1;
            T.img = this->img + 1;
            return T;
        }
        Complex operator--()
        {
            Complex T;
            T.real = this->real - 1;
            T.img = this->img - 1;
            return T;
        }
};

int main ()
{
    Complex N1(5, 7);
    Complex N2, N3;
    cout<<"The Complex Number is - ";
    N1.display();
    cout<<endl;
    
    N2 = ++N1;
    cout<<"The Complex Number after unary increment - ";
    N2.display();

    N3 = --N1;
    cout<<"The Complex number after unary decrement - ";
    N3.display();
}