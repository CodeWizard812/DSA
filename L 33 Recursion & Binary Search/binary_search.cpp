//Binary search using recursion
#include <iostream>
using namespace std;

void print(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int binary_search(int* arr, int n, int key)
{
    print(arr,n);
    int s = 0, e = n-1, mid = (s+e)/2;
    if (n==0)
    {
        return false;
    }

    if (arr[mid]==key)
        return true;
    else if (arr[mid]>key)
        return binary_search(arr, mid , key);/* code */
    else
        return binary_search(arr + (mid+1), n-(mid+1), key);
           
}

int main()
{
    int arr[100];
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    cout<<"Enter array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>i[arr];/* code */
    }

    int key;
    cout<<"Enter key: ";
    cin>>key;
    
    if (binary_search(arr, n, key))
        cout<<"Element found"<<endl;
    else
        cout<<"Not found"<<endl;

    return 0;
}