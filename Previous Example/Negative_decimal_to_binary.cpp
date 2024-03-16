#include <iostream>
using namespace std;

int main()
{
    int n,org, rem, prod=1, bn=0;

    cout<<"Enter a negative Decimal Number: "<<endl;
    cin>>n;

    org = n;
    n = -n;
    
    while(n>0)
    {
        rem = n%2;
        bn += (rem*prod);
        prod *= 10;
        n /= 2;
    }

    cout<<bn<<endl;
    
    int newans= (~bn);
    cout<<newans<<endl;

    newans = newans + 1;

    cout<<newans<<endl;
    return 0;
}