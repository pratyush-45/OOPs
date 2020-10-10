// To reverse elements in an array
#include <iostream>
using namespace std;

void swap (int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main ()
{
    int n, end;
    cout<<"Enter number of Elements in the Array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements in the Array : \n";
    for(int i= 0; i< n; i++){
         cin>>arr[i];
    }

    if(n%2 == 0)
    end = n/2 - 1;
    else 
    end = n/2;

    for(int i= 0; i<= end; i++){
         swap(arr[i], arr[n-i-1]);
    }

    cout<<"The Reversed Array is : \n";
    for(int i= 0; i< n; i++){
         cout<<arr[i]<<" ";
    }
}