#include <iostream>
using namespace std;

//inline declaration(works on 1 line funtions, for 2-3 lines depends on compiler and >3 not executable)
/*jaise macro ki case me program compile 
hone se just pehle hi har variable defined value 
se replace ho jata hai usi prakar inline me bhi 
compile hone se just pehle har getmax funtion ki 
jagah ye (a>b) ? a : b value chali jayegi*/
inline int getmax(int& a, int& b)
{
    return (a>b) ? a : b; 
}
/*Benefits 1. No extra memory usage
           2. No function call*/
int main()
{
    int a=5, b=10;
    
    int ans;
    ans = getmax(a,b);
    cout<<ans<<endl; 

    a=a+3;
    b=b-4;

    ans = getmax(a,b);
    cout<<ans<<endl; 

    return 0;
}