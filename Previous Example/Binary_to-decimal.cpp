//Binary to decimal Conversion
#include <iostream>
using namespace std;

int main()
{
    int bn,rem, dec=0, prod=1;

    cout<<"Enter the Binary Number: ";
    cin>>bn;

    while(bn>0)
    {
        rem = bn % 10;
        dec += rem * prod;
        prod *= 2;
        bn /= 10;
    }
    cout<<"Decimal: "<<dec;
    return 0;
}
