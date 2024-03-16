#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(5);
    l.push_front(3);
    l.push_back(7);
    l.push_front(1);

    cout<<"Size: "<<l.size()<<endl;

    cout<<"List "<<endl;
    for (int i : l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Front "<<l.front()<<endl;
    cout<<"Back "<<l.back()<<endl<<endl;

    list<int> l2(l);
    cout<<"List2 "<<endl;
    for (int i : l2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    l2.pop_back();

    cout<<"List2 "<<endl;
    for (int i : l2)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
    l2.erase(l2.begin());

    cout<<"List2 "<<endl;
    for (int i : l2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    list<int> a(6,50);
    cout<<"List a "<<endl;
    for (int i : a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

