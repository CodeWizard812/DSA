#include <iostream>
using namespace std;

int expo(int a, int b)
{
    long long int res = 1;

    while(b>0)
    {
        if (b&1)
        {
            res = 1ll*res*a;
        }
        a = 1ll*a*a;
        b = b>>1;
    }

    return res;
}

int main()
{
    int a,b;
    cout<<"Enter a and b: ";
    cin>>a>>b;

    cout<<"Exponential of a to power b: "<<expo(a,b)<<endl;

    return 0;
}