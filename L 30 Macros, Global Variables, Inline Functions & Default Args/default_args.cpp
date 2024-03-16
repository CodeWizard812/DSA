#include <iostream>
using namespace std;

/*start argument optional ki tarah kaam karega 
agar koi value dedega toh vo value lega ya fir 
jo default value di hai vo use kar lega */
void print(int *arr, int n, int start = 0)
{
    for (int i = start; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return;
}

/*default argument hamesha rightmost part par pehle chalega
means pehle start ko assign hogi uske baad hi n ko ho sakti h
sirf n ko nahi ho sakti*/
int main()
{
    int arr[5]={1,2,3,5,8};
    int size=5;

    print(arr, size);
    cout<<endl;
    print (arr, size, 3);

    return 0;
}