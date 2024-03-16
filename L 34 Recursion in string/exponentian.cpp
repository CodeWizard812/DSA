//m to power n in optimized way
#include <iostream>
using namespace std;

int power(int m, int n)
{
    if(n==1)
        return m;
    if (n & 1)//odd
        return m * power(m, n/2) * power(m, n/2);
    else//even
        return power(m, n/2) * power(m, n/2);
}


int main()
{
    int m;
    cout<<"Enter number: ";
    cin>>m;

    int n;
    cout<<"Enter power: ";
    cin>>n;

    cout<<m<<" to the power "<<n<<": "<<power(m,n)<<endl;

    return 0;
}