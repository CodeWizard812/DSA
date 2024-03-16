//Check whether given array is sorted or not
#include <iostream>
using namespace std;

bool is_sorted(int* arr, int n)
{
    if (n==0 || n==1)
        return true;/* code */

    if (arr[0] > arr[1])
        return false;
    else
    {
        bool ans = is_sorted(arr + 1, n - 1);
        return ans;
    }    
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
    

    if (is_sorted(arr, n))
        cout<<"Array is Sorted."<<endl;
    else
        cout<<"Not Sorted."<<endl;
    return 0;
}
