/* To define a template function to swap 
two numbers of same or different data types */
#include <iostream>
using namespace std;

template <class T>
void swap (T *x, T *y)
{
    T *temp;
    temp = x;
    x = y;
    y = temp; 
}

int main ()
{
    cout<<"------Swapping in Integer Data Type------"<<endl;
    int a = 22, b= 7;
    cout<<"Before Swapping : \t v1 = "<<a<<"\t v2 = "<<b<<endl;
    swap(a, b);
    cout<<"After Swapping : \t v1 = "<<a<<"\t v2 = "<<b<<endl;


    cout<<"------Swapping in Float Data Type------"<<endl;
    float c = 1.414, d = 1.732;
    cout<<"Before Swapping : \t v1 = "<<c<<"\t v2 = "<<d<<endl;
    swap(c, d);
    cout<<"After Swapping : \t v1 = "<<c<<"\t v2 = "<<d<<endl;


    cout<<"------Swapping in String Data Type------"<<endl;
    string e = "Computer", f = "Science";
    cout<<"Before Swapping : \t v1 = "<<e<<"\t v2 = "<<f<<endl;
    swap(e, f);
    cout<<"After Swapping : \t v1 = "<<e<<"\t v2 = "<<f<<endl;    

}
