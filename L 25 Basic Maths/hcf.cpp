#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout<<"Enter the Numbers: ";
    cin>>a>>b;

    if (a==0)
    {
        cout<<"HCF: "<<b<<endl;
        return 0;
    }
    else if (b==0)
    {
        cout<<"HCF: "<<a<<endl;
        return 0;/* code */
    }
    
    
    while (b!=0)
    {
        if (a<b)
        {
            swap(a,b);
        }
        a = a-b;
    }
    
    cout<<"HCF: "<<a<<endl;

    return 0;
}