#include <iostream>
using namespace std;

void merge(int* arr, int s, int e)
{
    int mid = (s+e)/2;

    int len1= mid - s + 1;
    int len2= e - mid;

    int *fir = new int[len1];
    int *sec = new int[len2];

    int k=s;
    for (int i = 0; i < len1; i++)
    {
        fir[i]=arr[k++];
    }

    k=mid+1;
    for (int i = 0; i < len2; i++)
    {
        sec[i]=arr[k++];/* code */
    }
    
    int i=0, j=0;
    int l=s;
    while (i<len1 && j<len2)
    {
        if (fir[i]>=sec[j])
        {
            arr[l++]=sec[j];
            j++;
        }
        else
        {
            arr[l++]=fir[i];   
            i++;
        }
        
    }

    while (i<len1)
    {
        arr[l++]=fir[i];
        i++;
    }

    while (j<len2)
    {
        arr[l++]=sec[j];
        j++;
    }
    
    delete []fir;
    delete []sec;
}

void merge_sort(int* arr, int s, int e)
{
    int mid = (s+e)/2;

    if (s>=e)
    {
        return;
    }
    
    merge_sort(arr, s, mid);
    
    merge_sort(arr, mid+1, e);

    merge(arr, s, e);

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

    merge_sort(arr,0, n-1);

    cout<<"Output array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<i[arr]<<" ";/* code */
    }

    return 0;
}