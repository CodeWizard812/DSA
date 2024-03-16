#include <iostream>
using namespace std;

class Animal
{
    public:
    int age=8;
    int weight=30;

    public:
    void bark()
    {
        cout<<"Barking"<<endl;
    }
};

class Human
{
    public:
    string color;

    public:
    void speak()
    {
        cout<<"Speaking"<<endl;
    }

};


//Multiple Inheritance
class Hybrid: public Animal, public Human
{
    
};

int main()
{
    Hybrid t;
    t.speak();
    cout<<t.age<<endl;

    t.bark();

    return 0;
}