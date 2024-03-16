//Count total number of primes upto n using sieve of erastothenes 
#include <iostream>
#include <vector>
using namespace std;

int printprime(int n)
{
    vector<bool> prime(n+1, true);

    int count=0;

    prime[0]=prime[1]=false;

    for (int i = 2; i <= n; i++)
    {
        if(prime[i])
        {
            count++;
            for (int j = 2*i; j <= n; j += i)
            {
                prime[j]=false;/* code */
            }    
        }    
    }
    /*T.C. = (n/2 + n/3 + n/4 + n/5......)
              n(1/2+ 1/3 + 1/4 + 1/5......)
              n*log(logn)   */
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