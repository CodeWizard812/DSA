#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int,string> m;

    m[12]="Mission";
    m[3]="Impossible";
    m[1]="Fallout";

    m.insert({5,"Burma"});

    cout<<"Before erase:  "<<endl;
    for (auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;
    
    cout<<"Finding 5: "<<m.count(5)<<endl;

    cout<<endl;

    m.erase(12);
    cout<<"After erase:  "<<endl;
    for (auto i : m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    auto it= m.find(1);

    for (auto i = it; i != m.end(); i++)
    {
        cout<< (*i).first<<endl;
    }
    
    //T.C. of insert, erase, find, count is O(log n)
}