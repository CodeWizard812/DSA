#include <iostream>
using namespace std;

int getsum(int *arr, int n)
{
    int sum=0;

    for (int i = 0; i < n; i++)
    {
        sum += *(i+arr);
    }
    
    return sum;
}

int main()
{
    char* ptr = new char;

    *ptr = 65;

    cout<<"Size of ptr: "<<sizeof(ptr)<<endl;
    cout<<"Size of *ptr: "<<sizeof(*ptr)<<endl;
    cout<< *ptr<< endl;

    int n = 8;
    int *a = new int[n];

    cout<<"Size of a: "<<sizeof(a)<<endl;
    cout<<"Size of *a: "<<sizeof(*a)<<endl;
    cout<<"Enter array: ";

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    cout<<"Output: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<endl;

    int ans= getsum(a, n);

    cout<<"Sum: "<<ans<<endl;

    delete ptr;

    delete []a;
    
    return 0;
}