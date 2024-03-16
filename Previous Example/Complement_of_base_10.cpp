#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Enter a Number: ";
    cin>>n;

    m=n;

    int mask=0;

    while (m!=0)
    {
        mask = (mask<<1) | 1;
        m = (m>>1);
    }

    /*for n=5 ~n is -6(1111...11010) but to find out in 
    practical we do the 2`s complement of the number.*/
    int ans = (~n) & mask;

    cout<<ans;

    return 0;
}
