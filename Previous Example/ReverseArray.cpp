//Reverse an array
#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    cout<<"Enter Array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Printing Array: "<<endl;
    for (int i = n-1; i >=0 ; i--)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"Reversed array: ";

    for (int i = 0; i < n/2; i++)
    {
        swap(arr[i],arr[n-1-i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
        
}
