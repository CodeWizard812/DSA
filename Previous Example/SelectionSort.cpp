//Selection sort(Love Babbar`s Method).
//(T.C. worst == best O(n^2)), (Unstable Algorithm).
#include <iostream>
using namespace std;

void Selectionsort(int *arr, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int minindex=i;
        for (int j =i+1 ; j < n; j++)
        {
            if (arr[j]<arr[minindex])
                minindex = j;    
        } 
        swap(arr[minindex], arr[i]);  
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

    Selectionsort(arr, n);

    cout<< "Output: ";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}