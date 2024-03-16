#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> st;

    st.push("Mission");
    st.push("Renesa");
    st.push("Fest");

    cout<<"Size: "<<st.size()<<endl;

    cout<<"Top element: "<<st.top()<<endl;

    st.pop();
    cout<<"Top element: "<<st.top()<<endl;

    cout<<"Empty or not: "<<st.empty()<<endl;

    cout<<"Size after pop: "<<st.size()<<endl;

}