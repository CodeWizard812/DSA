//Prints Prime numbers upto n
#include <iostream>
#include <math.h>
using namespace std;

bool primenum(int n)
{
    if (n<=1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
            return false;   
    }
    return true;
}

int printprime(int n)
{
    int count=0;

    for (int i = 2; i <= n; i++)
    {
        if(primenum(i))
        {
            // cout<<i<<" ";
            count++;
        }    
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>> n;

    cout<<"Total Prime numbers upto n: "<<printprime(n)<<endl;

    return 0;
}