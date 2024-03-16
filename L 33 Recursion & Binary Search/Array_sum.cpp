#include <iostream>
using namespace std;

int arraysum(int* arr, int n)
{
    if ((n-1)==0)
    {
        return arr[0];/* code */
    }
    
    return arr[n-1] + arraysum(arr, n - 1);
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
    
    cout<<"Sum: "<<arraysum(arr,n)<<endl;
    return 0;
}