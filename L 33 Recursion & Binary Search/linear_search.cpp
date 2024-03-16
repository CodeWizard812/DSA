//Search element using recursion
#include <iostream>
using namespace std;

int linear_search(int* arr, int n, int key)
{
    if (n==0)
    {
        return false;
    }

    if (arr[0]==key)
        return true;
    else
        return linear_search(arr+1, n - 1, key);
    
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
    cout<<"Enter key:";
    cin>>key;
    
    if (linear_search(arr, n, key))
        cout<<"Element found"<<endl;
    else
        cout<<"Not found"<<endl;

    return 0;
}