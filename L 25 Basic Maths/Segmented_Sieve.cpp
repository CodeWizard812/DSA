//Count/Print prime numbers upto n.
#include <iostream>
#include <math.h>
using namespace std;

int sieve(int s, int e, int n, bool* prime)
{
    int count=0;

    for (int i = s; i <= e; i++)
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

int segmented_sieve(int n)
{
    int winsize = sqrt(n);
    int st = 2;
    int end =winsize; 
    bool prime[n+1];

    prime[0]=prime[1]=false;

    for (int i = 2; i <= n; i++)
    {
        prime[i]=true;/* code */
    }

    int count = 0;
    int primes;
    int i=2;

    while (end<=n)
    {
        primes = sieve(st, end, n, prime);
        st  = end+1;
        end = i*winsize;
        if(end == winsize*winsize)
        {
            end = winsize*winsize + (n-winsize*winsize);
        }
        i++;
        count += primes;
    }
    
    return count;
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>> n;

    cout<<"Total Prime numbers upto n: "<<segmented_sieve(n)<<endl;

    return 0;
}