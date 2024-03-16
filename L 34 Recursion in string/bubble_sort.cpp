#include <iostream>
using namespace std;

void bubble_sort(int* arr, int n)
{
    if (n==1 || n==0)
        return;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i+1]<arr[i])
        {
            swap(arr[i], arr[i+1]);
        }    
    }
    
    bubble_sort(arr, n-1);

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

    bubble_sort(arr, n);

    cout<<"Output array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<i[arr]<<" ";/* code */
    }

    return 0;
}