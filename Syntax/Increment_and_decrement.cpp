// increment and decrement operators.
#include <iostream>
using namespace std;

int main()
{
    int i=4;
    int j=7;
    int k, l;
    
    k = i++ + j-- + --i + j++ - --j;
/*  15    4     7     4     6     6   */
    cout<< i <<" "<<" "<< j <<" " << k<<endl;
    /*     4              6          15*/
    l = ++j - --i + k-- + j++ - i-- - ++k + j--;
/*       7     3     15    7     3     15     8*/
    cout<< i <<" "<< j <<" " << k<<" "<<l;
    /*     2              7          15      16*/
}