#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(9);
    s.insert(2);
    s.insert(23);
    s.insert(6);
    s.insert(5);
    s.insert(23);

    cout<<"Set"<<endl;
    for (int i: s)
    {
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it=s.begin();
    it++;
    it++;

    s.erase(it);

    cout<<"Set"<<endl;
    for (int i: s)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    cout<<"Is 5 present?? "<<s.count(5)<<endl;//check presence of 5

    set<int>::iterator itr=s.find(9);//finding the element 9

    for (auto it = itr; it!=s.end(); it++)
    {
        cout<< *it<<" ";
    }cout<<endl;
    //T.C. of insert, erase, find, count is O(log n)
}