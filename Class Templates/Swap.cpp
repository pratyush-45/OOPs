/* To define a class template to swap two 
numbers of same or different data types */
#include <iostream>
using namespace std;

template <class T>
class Swap
{
    public:
        void swap (T *x, T *y)
        {
            T *temp;
            temp = x;
            x = y;
            y = temp; 
            cout<<"After Swapping  : \t v1 = "<<*x<<"\t v2 = "<<*y<<endl;
        }
};

int main ()
{
    cout<<"------Swapping in Integer Data Type------"<<endl;
    Swap<int> ob1;
    int a = 22, b= 7;
    cout<<"Before Swapping : \t v1 = "<<a<<"\t v2 = "<<b<<endl;
    ob1.swap(&a, &b);


    cout<<"------Swapping in Float Data Type------"<<endl;
    Swap<float> ob2;
    float c = 1.414, d = 1.732;
    cout<<"Before Swapping : \t v1 = "<<c<<"\t v2 = "<<d<<endl;
    ob2.swap(&c, &d);


    cout<<"------Swapping in String Data Type------"<<endl;
    Swap<string> ob3;
    string e = "Computer", f = "Science";
    cout<<"Before Swapping : \t v1 = "<<e<<"\t v2 = "<<f<<endl;
    ob3.swap(&e, &f);    

}