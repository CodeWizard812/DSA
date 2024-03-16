//Distinct ways to climb stairs if only 1 or 2 stairs can be climbed in a step
#include <iostream>
using namespace std;

int distinct_ways(int n)
{
    if (n==0)
        return 1;
    else if(n<0)
        return 0;
    
    int ans = distinct_ways(n-1) + distinct_ways(n-2);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter number of stairs: ";
    cin>>n;

    cout<<"Number of Distint ways: "<<distinct_ways(n)<<endl;

    return 0;
}