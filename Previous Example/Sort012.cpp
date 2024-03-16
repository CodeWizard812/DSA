#include <iostream>
using namespace std;

int main()
{
    int n=6;
    int arr[n]={0,1,2,2,1,0};

    int c[3]={0};

    for(int i=0; i < n; i++)
    {
       c[arr[i]]++;
    }
    
    for(int i=0; i< c[0] ; i++)
    {
       arr[i]=0;
    }

    for(int i=c[0]; i< c[1]+c[0] ; i++)
    {
       arr[i]=1;
    }
   
    for(int i=c[1]+c[0]; i< c[2]+c[1]+c[0] ; i++)
    {
       arr[i]=2;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}