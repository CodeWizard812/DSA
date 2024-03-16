#include <iostream>
using namespace std;

class Animal
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

class Dog: public Animal
{

};

class GermanShepherd: public Dog
{
    
};

int main()
{
    GermanShepherd t;
    t.speak();
    cout<<t.age<<endl;

    return 0;
}