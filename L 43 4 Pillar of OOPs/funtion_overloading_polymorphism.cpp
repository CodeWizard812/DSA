#include <iostream>
using namespace std;
//funtion overloading
class A
{
    public:
    void sayHello()
    {
        cout<<"Hello Everyone"<<endl;
    }

    void sayHello(string name)
    {
        cout<<"Hello "<<name<<endl;
    }
};


int main()
{
    A t;
    t.sayHello();

    return 0;
}