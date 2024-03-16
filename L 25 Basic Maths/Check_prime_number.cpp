//Check whether a number is prime or not
#include <iostream>
#include <math.h>
using namespace std;

bool primenum(int n)
{
    if (n<=1)
        return 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
            return 0;   
    }
    return 1;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>> n;

    if(primenum(n))
        cout<<"Prime number"<<endl;
    else
        cout<<"Non-Prime"<<endl;
    
    return 0;
}