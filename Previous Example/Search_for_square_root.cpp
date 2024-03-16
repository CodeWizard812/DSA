//Search for sqaure root using binary search.
#include <iostream>
using namespace std;

long long int sqroot(int sqnum)
{
    int st=0, end=sqnum, mid=(st+end)/2, ans;

    
    while(st<=end)
    {
        long long int square= mid*mid;

        if (square>sqnum)
        {    
            end=mid-1;
        }
        else if (square==sqnum)
        {
            return mid;
        }
        else
        {
            ans=mid;
            st=mid+1;
        }
        mid=(st+end)/2;    
    }
    return ans;
}

int main()
{

    int sqnum;
    cout<<"Enter number: ";
    cin>>sqnum;

    cout<<"Nearest square root is "<<sqroot(sqnum)<<endl;

    return 0;
}