//Rotate an array from given index k
#include <iostream>
using namespace std;

void rotate(int *a, int n, int k)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[(i+k)%n]=a[i];
    }

    for (int i = 0; i < n; i++)
    {
        a[i]=temp[i];
    }
    
    
    return;
}

int main()
{
    int arr[100];

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter Array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int idx;
    cout<<"Enter rotating index: ";
    cin>>idx;

    rotate(arr,n, idx);

    cout<<"Output Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] << " ";
    }

    return 0;
}