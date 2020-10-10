// Program to input two numbers and check if their division is possible or not
#include <iostream>
using namespace std;

int main ()
{
    int n1, n2;
    cout<<"Enter First Number :"<<endl;
    cin>>n1;
    cout<<"Enter Second Number :"<<endl;
    cin>>n2;

    try 
    {
        if (n2 != 0)
        {
            float div = (float)n1/n2;
            if(div < 0)
                throw 'e';
            cout<<"First number / Second Number : "<<div;
        }
        else
        {
            throw n2;
        }
    }

    catch (int x)
    {
        cout<<"Exception : Division by zero";
    }
    catch (char c)
    {
        cout<<"Exception : Result of Division is negative";
    }

    catch (...)
    {
        cout<<"Exception : Unknown";
    }
}