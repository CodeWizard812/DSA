#include <iostream>
using namespace std;

int main()
{
    int arr[5]={2,-3,3,3,-2};
    int sum=0;

    int k=0, l=1;
    
    while (k<5)
    {
        if ((arr[k] + arr[l]) == sum)
        {
            cout<<arr[k]<<" "<<arr[l]<<endl;
            k++;
            l= k+1 ;
        }
        else if (l==6)
        {
            k++;
            l = k+1;/* code */
        }
        else
        {
            l++;
        }
    }
    return 0;
}