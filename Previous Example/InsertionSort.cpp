//Insertion sort
//(T.C. Best case O(n), Worst case O(n^2))(Stable and Adaptive algorithm)
#include <iostream>
using namespace std;

void Insertionsort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp=arr[i];
        for (int j = i-1; j >= 0 ; j--)
        {
            if (temp<arr[j])
            {
                swap(arr[j+1],arr[j]);
            }
        }    
    }
    return;    
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

    Insertionsort(arr, n);

    cout<< "Output: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}