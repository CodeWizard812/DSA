#include <iostream>
using namespace std;
  
// base class
class Vehicle 
{
public:
    void vehicle() 
    { 
        cout << "This is a Vehicle\n"; 
    }
};
  
// base class
class Fare 
{
public:
    void fare() 
    { 
        cout << "Fare of Vehicle\n"; 
    }
};
  
// first sub class
class Car : public Vehicle 
{
};
  
// second sub class
class Bus : public Vehicle, public Fare 
{
};
  
// main function
int main()
{
    // Creating object of sub class will
    // invoke the constructor of base class.
    Bus obj2;
    obj2.vehicle();

    return 0;
}