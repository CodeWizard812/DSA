//Basic Concept of string
#include <iostream>
using namespace std;

int main()
{
    string str={'a','b','c','\0','a'};
    // cout<<"Input String: ";
    // getline(cin, str);

    cout<<str<<endl;

    cout<<str.length()<<endl;

    str.pop_back();
    str.pop_back();
    cout<<str<<endl;

    str.push_back('n');
    str.push_back('e');
    cout<<str<<endl;

    cout<<"Is empty: "<<str.empty()<<endl;

    //Replace characters
    str.replace(4, 7,"Namaste");
    cout<<str<<endl;

    cout<<str.at(4)<<endl;

    cout<<str.back()<<endl;

    cout<<str.front()<<endl;

    str.clear();
    cout<<str.capacity()<<endl;

    cout<<str.length()<<endl;
    
    return 0;
}