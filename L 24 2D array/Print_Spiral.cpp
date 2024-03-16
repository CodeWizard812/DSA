//Printing 2d array in spiral form
#include <iostream>
using namespace std;

void spiral(int a[3][4])
{
    int rs=0, re=2, cs=0, ce=3;

    while (rs<=re && cs<=ce)
    {
        for (int i = cs; i <=ce; i++)
        {
            cout<<a[rs][i]<<" ";
        }
        rs++;
        if (rs>re)
        {
            break;
        }
        for (int i = rs; i <=re; i++)
        {
         cout<<a[i][ce]<<" ";/* code */
        }
        ce--;
        for (int i = ce; i >= cs; i--)
        {
            cout<<a[re][i]<<" ";
        }
        re--;
        for (int i = re; i >=rs ; i--)
        {
            cout<<a[i][cs]<<" ";
        }
        cs++;
        if (cs>ce)
        {
            break;
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

    spiral(arr);

    return 0;
}