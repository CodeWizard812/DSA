#include <iostream>
using namespace std;

int main()
{
    int n=6;
    int arr[n]={1,2,1,2,1,3};
    int sum=5;

    bool flag=0;

    int i=0, j= i+1, k=i+2;

    while (i<(n-2) && j<(n-1) && k<(n))
    {
        if ((arr[i] + arr[j] + arr[k]) == sum)
        {
            cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
            i++;
            j=i+1;
            k=i+2;
            flag=1;
        }
        else if (k==(n-1) && j!=(n-2) )
        {
            j++;
            k=j+1;
        }
        else if (j==(n-2))
        {
            i++;
            j=i+1;
            k=i+2;
        }
        else
        {
            k++;
        }
    }
    
    if (flag==0)
    {
        cout<<-1;
    }
    
    return 0;
}