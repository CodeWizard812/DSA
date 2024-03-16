#include <iostream>
#include <queue>
using namespace std;

int main()
{
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int,vector<int> ,greater<int>> mini;
    
    maxi.push(6);
    maxi.push(9);
    maxi.push(100);
    maxi.push(3);

    cout<<"Size "<<maxi.size()<<endl;

    int n= maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    mini.push(6);
    mini.push(36);
    mini.push(9);
    mini.push(11);
    mini.push(3);
    
    cout<<"Size "<<mini.size()<<endl;

    int m= mini.size();
    for (int i = 0; i < m; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;

    cout<<"Empty or not: "<<mini.empty()<<endl;
}
