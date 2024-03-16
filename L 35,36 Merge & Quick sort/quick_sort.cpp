#include <iostream>
using namespace std;

int partition(int* arr, int s, int e)
{
    int count=0;
    int temp=arr[s];

    for (int i = s+1; i <= e; i++)
    {
        if (arr[i]<temp)
        {
            count++;
        }
    }
    int pi=s+count;
    swap(arr[s], arr[pi]);

    int i=s;
    int j=e;
    while(i<pi && j>pi)
    {
        if (arr[i]<temp)
            i++;
        else if (arr[j]>temp)
            j--;
        else
            swap(arr[i],arr[j]);   
    }

    return pi;
}

void quick_sort(int* arr, int s, int e)
{

    if (s>=e)
    {
        return;
    }

    int p = partition(arr, s, e);

    quick_sort(arr, s, p-1);
    
    quick_sort(arr, p+1, e);

    return;
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

    quick_sort(arr,0, n-1);

    cout<<"Output array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<i[arr]<<" ";/* code */
    }

    return 0;
}