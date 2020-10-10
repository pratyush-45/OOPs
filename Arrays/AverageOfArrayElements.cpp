// To print sum and average of Array elements
#include <iostream>
using namespace std;

float average(int sum, int n)
{
    float a = (sum*1.0)/n;
    return a;
}

int sum (int arr[], int n) 
{
    int s = 0;
    for(int i= 0; i<n; i++){
        s += arr[i]; 
    }
    return s;
}

int main()
{
    int n = 5, s;
    float a;
    int arr[5];
    cout<<"Enter the elements in the array : \n";

    for(int i= 0; i< 5; i++){
         cin>>arr[i];
    }

    s = sum(arr, n);
    a = average(s, n);

    cout<<"Sum of Array Elements : "<<s<<endl<<"Average of Array Elements :"<<a;
}