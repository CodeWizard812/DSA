//Book allocation problem using binary search.
#include <iostream>
using namespace std;

int bookalloc(int *, int , int );
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

    int stud;
    cout<<"Enter number of students: ";
    cin>>stud;

    cout<<"Maximum pages allocated to one student: "<<bookalloc(arr, n, stud)<<endl;

    return 0;
}

int bookalloc(int *arr, int n, int m)
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
    int stcount=1;
    int pagesum=0;

    for (int i = 0; i < n; i++)
    {
        if (pagesum+arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            stcount++;
            if (stcount > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];
        }
        
    }
    return true;
}

