//Bubble sort.
//(T.C. Best case O(n), Worst case O(n^2))(Stable and adaptive algorithm)
#include <iostream>
using namespace std;

void Bubblesort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j =0 ; j < n-i; j++)
        {
            if (arr[j]>arr[j+1])
                swap(arr[j+1], arr[j]); 
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

    Bubblesort(arr, n);

    cout<< "Output: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}