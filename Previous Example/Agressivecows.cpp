//Agressive cows example using binary search.
#include <bits/stdc++.h>
using namespace std;

int Agressivecows(int *, int , int );
bool ispossible(int *, int , int , int );
void Insertionsort(int *, int );

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

    int cows;
    cout<<"Enter number of cows: ";
    cin>>cows;

    cout<<"Minimum largest distance between cows: "<<Agressivecows(arr, n, cows)<<endl;

    return 0;
}

int Agressivecows(int *arr, int n, int m)
{
    Insertionsort(arr, n);
    
    int st=0, end=arr[n-1], mid=(st+end)/2, ans=-1;
    while(st<=end)
    {
        if (ispossible(arr, n, m, mid))
        {
            ans=mid;
            st=mid+1;
        }
            
        else
            end = mid-1;

        mid=(st+end)/2;    
    }
    return ans;
}

bool ispossible(int *arr, int n, int m, int mid)
{
    int cows=1;
    int lastpos=arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i]-lastpos >= mid)
        {
            cows++;
            if (cows==m)
            {
                return true;
            }
            lastpos=arr[i];
        }
        
    }
    return false;
}

void Insertionsort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp=arr[i];
        for (int j = i-1; j >= 0 ; j--)
        {
            if (temp<arr[j])
            {
                swap(arr[j+1],arr[j]);
            }
            
            
        }
        
    }
    return;    
}