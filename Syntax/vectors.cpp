#include <iostream>
#include <vector>//Header file to use vector
using namespace std;

int main()
{
    vector<int> v;//Vector formation

    cout<<"Capacity: "<<v.capacity()<<endl;//checking capacity(0)

    v.push_back(6);
    cout<<"Capacity: "<<v.capacity()<<endl;//checking capacity(1)

    v.push_back(9);
    cout<<"Capacity: "<<v.capacity()<<endl;//checking capacity(1)

    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl;//checking capacity(4) doubles after reaching multiples of 2

    cout<<"Size: "<<v.size()<<endl;//count total number of elements present

    cout<<"Element at index 2: "<<v.at(2)<<endl;//Gives element at given index

    cout<<"Front: "<<v.front()<<endl;//gives element at front
    cout<<"Back: "<<v.back()<<endl; //gives element at back  

    cout<<"Before pop: "<<endl;
    for (int i : v)//printing vector
    {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();//removes the last element

    cout<<"After pop: "<<endl;
    for (int i : v)//printing vector
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Capacity before clear: "<<v.capacity()<<endl;

    cout<<"Size before clear: "<<v.size()<<endl;

    v.clear();//clears the vector

    cout<<"Size after clear: "<<v.size()<<endl;
    
    cout<<"Capacity after clear: "<<v.capacity()<<endl;


    cout<<endl<<endl;

    vector<int> a(5,15);//vector is created with capacity/size 5 and all elements in it is/are 15.
    cout<<"Vector a:";
    for (int i : a)//printing vector
    {
        cout<<i<<" ";/* code */
    }cout<<endl;
    
    cout<<"Capacity: "<<a.capacity()<<endl;//in this case capacity and size are same as they are pre-defined
    cout<<"Size: "<<a.size()<<endl;

    vector<int> last(a);//vector last is created copying all data from vector a
    cout<<"Vector last:";
    for (int i : last)//printing vector
    {
        cout<<i<<" ";/* code */
    }cout<<endl;


    return 0;
}