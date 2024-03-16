//Painter partition`s problem using binary search.
#include <iostream>
using namespace std;

int pianterpart(int *, int , int );
bool ispossible(int *, int , int , int );


int main()
{
    int arr[100];

    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<< "Enter array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int painters;
    cout<<"Enter number of painters: ";
    cin>>painters;

    cout<<"Minimum time required to paint the whole array: "<<pianterpart(arr, n, painters)<<endl;

    return 0;
}

int pianterpart(int *arr, int n, int m)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    
    int st=0, end=sum, mid=(st+end)/2, ans=-1;
    while(st<=end)
    {
        if (ispossible(arr, n, m, mid))
        {
            ans=mid;
            end=mid-1;
        }
            
        else
            st= mid+1;

        mid=(st+end)/2;    
    }
    return ans;
}

bool ispossible(int *arr, int n, int m, int mid)
{
    int pcount=1;
    int boardsum=0;

    for (int i = 0; i < n; i++)
    {
        if (boardsum+arr[i] <= mid)
        {
            boardsum += arr[i];
        }
        else
        {
            pcount++;
            if (pcount > m || arr[i] > mid)
            {
                return false;
            }
            boardsum = arr[i];
        }
        
    }
    return true;
}