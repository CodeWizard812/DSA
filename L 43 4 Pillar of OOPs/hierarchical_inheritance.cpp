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
        cout<<"Speaking"<<endl;
    }
};

class B: public A
{
    public:
    void print()
    {
        cout<<"Heirarchical Inheritance"<<endl;
    }
};

class C: public A
{
    
};

class D: public B
{

};

class E: public B
{

};

int main()
{
    D t;
    t.speak();
    cout<<t.age<<endl;
    t.print();

    return 0;
}