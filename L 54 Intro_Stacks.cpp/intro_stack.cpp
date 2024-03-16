#include <iostream>
#include <stack>//STL is used
using namespace std;

int main()
{
    //creation of stack
    stack <int> s;

    s.push(2);
    s.push(5);

    s.pop();

    //returns top element
    cout<<"Top: "<<s.top()<<endl;
    //checking stack is empty or not
    cout<<"Is Empty: "<<s.empty()<<endl;

    s.push(9);
    cout<<"size: "<<s.size()<<endl;


    return 0;
}