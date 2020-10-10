// To sort an array in descending order
#include <iostream>
using namespace std;

void swap (int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void descendingSort(int arr[], int n)
{
    for(int i= 0; i<n-1; i++) {
		bool sorted= true;		
		for(int j= 0; j<n-1-i; j++) {
			if(arr[j+1] > arr[j]) {
                swap(arr[j], arr[j+1]);
				sorted = false;
			}
        }
		if(sorted)
			break;
	}
}

int main ()
{
    int n;
    cout<<"Enter number of Elements in the Array \n";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements in the Array : \n";
    for(int i= 0; i< n; i++){
         cin>>arr[i];
    }

    descendingSort(arr, n);

    cout<<"The Array Sorted in Descending Order is : \n";
    for(int i= 0; i< n; i++){
         cout<<arr[i]<<" ";
    }
}