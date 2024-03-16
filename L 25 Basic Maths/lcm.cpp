#include <iostream>
using namespace std;

int gcd(int a, int b)
{

    if (a==0)
        return b;
    if (b==0)
        return a;/* code */
    
    while (b!=0)
    {
        if (a<b)
        {
            swap(a,b);
        }
        a = a-b;
    }
    
    return a;
}

int lcm(int a, int b)
{
    return ((a*b)/gcd(a,b));
}

int main()
{
    int a, b;
    cout<<"Enter the Numbers: ";
    cin>>a>>b;

    cout<<"LCM: " <<lcm(a,b)<<endl;

    return 0;
}