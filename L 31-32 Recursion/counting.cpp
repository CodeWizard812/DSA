#include <iostream>
using namespace std;

void print(int n)
{
    if (n==0)
        return;/* code */

    print(n-1);

    cout<< n<<endl;

    //return;add it or not same thing function will return after completion
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    print(n);

    return 0;
}