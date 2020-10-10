// To find the maximum and minimum element in an array
#include <iostream>
using namespace std;

void maxMinElement()
{
    int maximum, minimum;
    int arr[5];

    for(int i= 0; i< 5; i++){
         cin>>arr[i];
    }

    maximum = arr[0]; minimum = arr[0];

    for(int i= 0; i< 5; i++){
        if(arr[i] > maximum)
        maximum = arr[i];
        if(arr[i] < minimum)
        minimum = arr[i];
    }

    cout<<"Maximum Element in the array is : "<<maximum<<endl;
    cout<<"Minimum Element in the array is : "<<minimum;
}

int main()
{
    cout<<"Enter the elements in the array : \n";
    maxMinElement();
}