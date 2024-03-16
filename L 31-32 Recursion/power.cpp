#include <iostream>
using namespace std;

int power(int m, int n)
{
    if (n==0)
        return 1;/* code */
    
    return m* power(m, n-1);
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