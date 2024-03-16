//Pivot element in rotated sorted array.
#include <iostream>
using namespace std;

int pivotele(int *arr, int n)
{
    int st=0, end=(n-1), mid=(st+end)/2;
    while(st<end)
    {
        if (arr[mid]>=arr[0])
            st= mid+1;
        else
            end=mid;

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

    cout<<"Pivot element is "<<pivotele(arr, n)<<endl;

    return 0;
}