//Rotate Matrix by 90 degrees
#include <iostream>
using namespace std;

void rotate90(int arr[3][4])
{
    int ans[4][3];
    for (int j = 0, m=0; j < 4 && m<4; j++)
    {
        for (int i = 2, n=0; i >=0 && n<3; i--)
        {
            ans[m][n]=arr[i][j];
            n++;
        }
        m++;
    }
    
    cout<<" Printing answer: "<<endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;   
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

    rotate90(arr);

    return 0;
}    