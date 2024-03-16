//Binary Search(T.C.== O(logn))
#include <iostream>
using namespace std;

int binarysearch(int *arr, int size, int key )
{
    int lo=0, hi=(size-1), mid=(hi+lo)/2;

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
    cout<<"Enter key: ";
    cin>>key;

    cout<<"Position: "<<binarysearch(arr, n, key)<<endl;

    return 0;
}
