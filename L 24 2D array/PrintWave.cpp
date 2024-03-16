#include <iostream>
using namespace std;

void printwave(int arr[3][4])
{
    cout<<"Output: "<<endl;
    for (int i = 0; i < 4; i++)
    {
        if (i%2==0)
        {
            for (int j=0; j < 3; j++)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        else
        {
            for(int j=2; j>=0;j--)
            {
                cout<<arr[j][i]<<" ";
            }
        }
    }
    return;
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

    printwave(arr);

    return 0;
}
