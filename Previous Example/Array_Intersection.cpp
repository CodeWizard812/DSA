#include <iostream>
using namespace std;

int main()
{
    int a[6]={1,2,2,2,3,4};
    int b[4]={2,2,3,3};

    int k=0, l=0;
    
    bool flag=0;

    while(k<6 && l<4)
    {
        if (a[k] == b[l])
        {
            cout<<a[k]<<" ";
            k++;
            l++;
            flag=1;
        }
        else if(a[k] < b[l])
        {
            k++;
        }
        else
        {
            l++;
        }
    }

    if (flag==0)
    {
        cout<<-1;
    }
    
    return 0;
}