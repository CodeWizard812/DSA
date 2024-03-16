#include <iostream>
using namespace std;

//Global variable declaration
int s =15;
//Don`t use it as any block/funtion 
//can change it`s value and it will
//reflect in others.
void b(int & i)
{
    cout<<s++<<" "<<i<<endl;

}

int main()
{
    int i=5;
    
    b(i);
    cout<<s<<endl;
    return 0;
}