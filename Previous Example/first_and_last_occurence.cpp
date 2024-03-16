//First and last occurence of an element using binary search.
#include <iostream>
using namespace std;

int firstoccur(int *arr, int n, int key)
{
    int st=0, end=(n-1), mid=(st+end)/2, ans= -1;
    while (st<=end)
    {
        if (arr[mid]==key)
        {
            if (arr[mid-1]==key && (mid-1) >= 0)
            {
                mid--;
                continue;
            }
            else
            {
                ans = mid;
                return ans;
            }

        }
        else if (key>arr[mid])
        {
            st=mid+1;
        }
        else
        {
            end=mid-1;
            
        }
        mid=(end+st)/2;    
    }
    
    return -1;
}

int lastoccur(int *arr, int n, int key)
{
    int st=0, end=(n-1), mid=(st+end)/2, ans= -1;
    while (st<=end)
    {
        if (arr[mid]==key)
        {
            if (arr[mid+1]==key && (mid+1) <= (n-1))
            {
                mid++;
                continue;
            }
            else
            {
                ans = mid;
                return ans;
            }

        }
        else if (key>arr[mid])
        {
            st=mid+1;
        }
        else
        {
            end=mid-1;
            
        }
        mid=(end+st)/2;    
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

    cout<<firstoccur(arr, n, key)<<endl;

    cout<<lastoccur(arr, n, key)<<endl;

    return 0;
}