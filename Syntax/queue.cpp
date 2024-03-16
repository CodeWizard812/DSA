#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;


    q.push("Mission");
    q.push("Renesa");
    q.push("Fest");

    cout<<"Size: "<<q.size()<<endl;

    cout<<"Front element: "<<q.front()<<endl;

    q.pop();
    cout<<"Back element: "<<q.back()<<endl;

    cout<<"Empty or not: "<<q.empty()<<endl;

    cout<<"Size after pop: "<<q.size()<<endl;
}