//Book allocation using recursion
#include <iostream>
using namespace std;


int pivot(int* arr, int s, int e)
{ 
    int mid = (s+e)/2;

    if(s==e)
        return arr[s];
    if(arr[mid]>=arr[0])
        return pivot(arr, mid+1, e);
    else if(arr[mid]<arr[0])
        return pivot(arr, s, mid);

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

    cout<<"Pivot element is: "<<pivot(arr, 0, n-1)<<endl;

    return 0;
}