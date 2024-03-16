/*Butterfly pattern
*                   *
* *               * * 
* * *           * * * 
* * * *       * * * * 
* * * * *   * * * * * 
* * * * * * * * * * * 
* * * * *   * * * * * 
* * * *       * * * * 
* * *           * * * 
* *               * * 
*                   * 

*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int k=i;
        if(k>n/2)
        {
            k=n-i+1;
        }
        for (int j = 1; j <= k; j++)
        {
            cout<<"* ";
        }
        for (int space = 1; space <= n-2*k; space++)
        {
            cout<<"  ";
        }
        if (n%2!=0)
        {
            if (i==n/2+1)
            {
                k=k-1;
            }   
        }
        for (int j = 1; j <= k; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";    
    }
}
