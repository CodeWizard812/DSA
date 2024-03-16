#include <iostream>
using namespace std;

void insertion_sort(int* arr, int n, int m)
{
    if (m==n)
        return;
    
    int temp = arr[m];
    for (int i = m; i >= 0; i--)
    {
        if (temp<arr[i])
        {
            swap(arr[i], arr[i+1]);
        }    
    }
    
    insertion_sort(arr, n, m+1);

}

int main()
{
    int arr[100];
    int n;
    cout<<"Enter array size: ";
    cin>>n;

    cout<<"Input array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>i[arr];/* code */
    }

    insertion_sort(arr, n, 0);

    cout<<"Output array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<i[arr]<<" ";/* code */
    }

    return 0;
}