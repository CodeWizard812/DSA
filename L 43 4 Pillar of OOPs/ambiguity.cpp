#include <iostream>
using namespace std;

class A
{
    public:
    int age=8;
    int weight=30;

    public:
    void speak()
    {
        cout<<"A Speaking"<<endl;
    }
};

class B
{
    public:
    void speak()
    {
        cout<<"B Speaking"<<endl;
    }
};

class C: public B, public A
{

};


int main()
{
    C t;
    t.B::speak();
    cout<<t.age<<endl;

    return 0;
}