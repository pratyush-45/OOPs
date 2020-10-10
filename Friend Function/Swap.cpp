// To write a program to swap two numbers using friend function
#include<iostream>
using namespace std;

class number
{
    int n1, n2;
    public:
        number(int a, int b)
        {
            this->n1 = a;
            this->n2 = b;
        }
        void print ()
        {
            cout<<"After Swapping : "<<endl;
            cout<<"First Number - "<<n1<<endl;
            cout<<"Second Number - "<<n2<<endl;
        }

        friend void swap(number& N);
};
void swap(number& N)
{
    int temp;
    temp = N.n1;
    N.n1 = N.n2;
    N.n2 = temp;
}

int main()
{
    int n1, n2;
    cout<<"Enter First Number -"<<endl;
    cin>>n1;
    cout<<"Enter Second Number -"<<endl;
    cin>>n2;

    number N(n1, n2);
    swap(N);
    N.print();
}