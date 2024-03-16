//Sum of two arrays.
#include <iostream>
#include <vector> 
using namespace std;

void SumofArrays(int* a, int* b, int n, int m)
{
    vector <int> ans;

    int carry=0;

    int i=n-1;
    int j=m-1;
    while (i>=0 && j>=0)
    {
        int sum;
        sum = a[i]+b[j] + carry;
        carry = sum/10;
        sum= sum % 10;
        ans.push_back(sum);  
        i--;
        j--;
    }

    while(i>=0)
    {
        int sum = a[i]+ carry;
        carry = sum/10;
        sum= sum % 10;
        ans.push_back(sum);  
        i--;
    }

    while (j>=0)
    {
        int sum = b[i]+ carry;
        carry = sum/10;
        sum= sum % 10;
        ans.push_back(sum);  
        j--;
    }

    while (carry!=0)
    {
        sum =carry;
        carry = sum/10;
        sum= sum % 10;
        ans.push_back(sum); 
    }
    
    
    cout<<"Sum = ";
    for (int i = max(n,m)-1; i >=0 ; i--)
    {
        cout<<ans[i];
    }

    return;
}

int main()
{
    int arr[100]={0}, brr[100]={0};

    int n;
    cout<<"Enter size of array a: ";
    cin>>n;

    cout<<"Enter array a: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int m;
    cout<<"Enter size of array b: ";
    cin>>m;

    cout<<"Enter array b: ";
    for (int i = 0; i < m; i++)
    {
        cin>>brr[i];
    }

    SumofArrays(arr,brr,n, m);

    return 0;
}