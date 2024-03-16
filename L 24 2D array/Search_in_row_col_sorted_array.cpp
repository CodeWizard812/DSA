//Search in row-wise and column-wise 2D sorted array.
#include <iostream>
using namespace std;

bool search(int arr[5][5], int key)
{
    int row = 5;
    int col = 5;

    int r = 0;
    int c = col - 1;

    while (r<row && c>=0)
    {
        int element = arr[r][c];

        if (element == key)
        {
            return 1;
        }
        else if (element > key)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    return 0;
}

int main()
{
    int arr[5][5];
    cout<<"Input array: ";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
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