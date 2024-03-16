#include <iostream>
using namespace std;

int main()
{
    int a=5, b=10;

/*This whole code can be converted 
into single line code using tertiary 
operator as below*/
    // if (a>b)
    // {
    //     cout<<a<<endl;
    // }
    // else
    // {
    //     cout<<b<<endl;
    // }
    
    int ans = (a>b) ? a : b;

    cout<<ans<<endl; 

    return 0;
}