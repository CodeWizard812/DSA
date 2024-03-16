#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue <int> q;

    q.push(15);

    q.push(85);  
    cout<<"Front: "<<q.front()<<endl;
    
    q.push(19);
    cout<<"Front: "<<q.front()<<endl;
    
    q.push(12);
    cout<<"Back: "<<q.back()<<endl;
    cout<<"Size: "<<q.size()<<endl;

    cout<<"Printing queue: ";
    while(q.empty()!= 1)
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}