/* To display operator overloading by defining a class which 
performs binary addition and subtraction of complex numbers */
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
            cout<<real<<" + "<<img<<"i"<<endl;
        }
        Complex operator+(Complex N2)
        {
            Complex T;
            T.real = this->real + N2.real;
            T.img = this->img + N2.img;
            return T;
        }
        Complex operator-(Complex N2)
        {
            Complex T;
            T.real = this->real - N2.real;
            T.img = this->img - N2.img;
            return T;
        }
};

int main ()
{
    Complex N1(5, 7);
    Complex N2(2, 4);
    Complex N3, N4;
    cout<<"First Complex Number - ";
    N1.display();
    cout<<endl;
    cout<<"Second Complex Number - ";
    N2.display();
    cout<<endl;
    
    N3 = N1 + N2;
    cout<<"Result after adding the two Complex Numbers - ";
    N3.display();

    N4 = N1 - N2;
    cout<<"Result after subtracting the two Complex Numbers - ";
    N4.display();
}