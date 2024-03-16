#include <iostream>
#include <queue>
using namespace std;

int main()
{
    deque <int> q;

    q.push_back(15);

    q.push_front(85);  
    cout<<"Front: "<<q.front()<<endl;
    
    q.push_back(19);
    
    
    q.push_front(12);
    cout<<"Back: "<<q.back()<<endl;
    cout<<"Size: "<<q.size()<<endl;
    cout<<"Front: "<<q.front()<<endl;
    
    q.pop_front();
    cout<<"Front: "<<q.front()<<endl;

    q.pop_back();
    cout<<"Front: "<<q.back()<<endl;

    return 0;
}