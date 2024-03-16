#include <iostream>
using namespace std;

//parent/super class
class Human
{
    public:
    int height;
    int weight;
    int age;

    public:
    int getage()
    {
        return this->age; 
    }
    void setweight(int w)
    {
        this->weight = w;
    }
};

//child/sub class
class Male: public Human
{
    public:
    string color="black";

    void sleep()
    {
        cout<<"Male Sleeping"<<endl;
    }
};

int main()
{
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.weight<<endl;
    cout<<object1.height<<endl;

    cout<<object1.color<<endl;
    object1.sleep();

    object1.setweight(10);

    cout<<object1.weight<<endl;
     
    return 0;
}