//Search in rotated sorted array.
#include <iostream>
using namespace std;

int search(int*, int, int);
int binarysearch(int*, int, int, int);
int pivot(int*, int);

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

    int key;
    cout<<"Enter Element to search: ";
    cin>>key;

    cout<<"Element`s position: "<<search(arr, n, key)<<endl;

    return 0;
}

int search(int *arr, int n, int key)
{
    int pi;
    pi= pivot(arr, n); 
    int ans;

    if (key>=arr[pi] && key<=arr[n-1])
    {
       return binarysearch(arr, pi, n-1, key );
    }
    else
    {
       return binarysearch(arr, 0, pi-1, key ); 
    }
    
}

int binarysearch(int *arr, int st, int end, int key )
{
    int lo=st, hi=end, mid=(hi+lo)/2;

    while (lo<=hi)
    {
        if (key==arr[mid])
        {
            return mid;
        }
        else if (key>arr[mid])
        {
            lo=mid+1;
        }
        else if (key<arr[mid])
        {
            hi=mid-1;
            
        }
        mid=(hi+lo)/2;    
    }
    return -1;
}

int pivot(int *arr, int n)
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
    return st;
}