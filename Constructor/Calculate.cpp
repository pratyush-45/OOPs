// To use this pointer to calculate sum of two numbers
#include <iostream>
using namespace std;

class Calculate
{
    int num, num1;
    public:
        Calculate(int n1, int n2)
        {
            this->num = n1;
            this->num1 = n2;
        }
        void sum ()
        {
            cout<<"The two Numbers are : "<<num<<" and "<<num1<<endl;
            cout<<"Sum of the two Numbers is : "<<num+num1<<endl;
        }
};

int main ()
{
    Calculate N1(4, 9), N2(8, -5);
    
    N1.sum();

    N2.sum();
}