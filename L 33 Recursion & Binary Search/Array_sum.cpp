#include <iostream>
using namespace std;

int arraysum(int* arr, int n)
{
    if ((n)==0)
    {
        return 0;/* code */
    }
    
    return arraysum((arr+1), n - 1) + arr[0];
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