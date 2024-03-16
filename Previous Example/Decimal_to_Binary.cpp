//Decimal to Binary conversion
#include <iostream>
using namespace std;

int main()
{
    int n, rem, prod=1, bn=0;

    cout<<"Enter the Decimal Number: "<<endl;
    cin>>n;

    while(n>0)
    {
        rem = n%2;
        bn += (rem*prod);
        prod *= 10;
        n /= 2;
    }
    cout<<"Binary: "<<bn<<endl;
    
    return 0;
}