#include <iostream>
using namespace std;

int main()
{
    //int arr[100][100];
    //int arr[3][4]={1,2,3,4,5,6,7,8,9,1,2,3};
    int arr[3][4]={{1,111,1,1111},{2,22,222,2222},{3,33,3333,33333}};

    // cout<<"Input array: ";
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin>>arr[j][i];
    //     }
        
    // }
    
    cout<<"Output array: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}
