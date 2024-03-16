//Peak of a mountain when no two elements are equal(Binary search).
#include <iostream>
using namespace std;

int peakofmount(int *arr, int n)
{
    int st=0, end=(n-1), mid=(st+end)/2;
    while (st<end)
    {
        if (arr[mid]<arr[mid+1])
        {
            st= mid+1;
        }
        else
        {
            end=mid;
        }
        mid=(st+end)/2;
    }
    return arr[st];
}

int main()
{
    int arr[100];

    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<< "Enter array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }


    cout<<"Peak is "<<peakofmount(arr, n)<<endl;

    return 0;
}