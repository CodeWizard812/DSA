//Search in 2D sorted array.
#include <iostream>
using namespace std;

bool search(int arr[3][4], int key)
{
    int row = 3;
    int col = 4;

    int s = 0;
    int e = row*col - 1;
    int mid = s +(e-s)/2;

    while (s<=e)
    {
        int element = arr[mid/col][mid%col];

        if (element == key)
        {
            return 1;/* code */
        }
        else if (element > key)
        {
            e = mid - 1; /* code */
        }
        else
        {
            s = mid + 1;   
        }
        mid = s +(e-s)/2;
    }
    return 0;
}

int main()
{
    int arr[3][4];
    cout<<"Input array: ";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }    
    }

    int key;
    cout<<"Enter Key: ";
    cin>> key;

    if (search(arr, key))
        cout<<"Element found"<<endl;
    else
        cout<<"Element not found"<<endl;

    return 0;
}  