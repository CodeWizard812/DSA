//Check if array is sorted and rotated.
#include <iostream>
using namespace std;

bool checkRotatedSorted(int *a, int n)
{
    int count=0;

    for (int i = 1; i < n; i++)
    {
        if (a[i-1]>a[i])
        {
            count++;
        }
    }
    
    if (a[n-1]>a[0])
    {
        count++;
    }

    return count <= 1;
    
}

int main()
{
    int arr[100];

    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    cout<<"Enter Array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    bool ans = checkRotatedSorted(arr,n);

    if (ans==1)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    

    return 0;
}