//Remove the string 2 occurences.
#include <iostream>
using namespace std;

string RemoveOccurences(string str, string part)
{
    while (str.length()!=0 && str.find(part) <str.length())
    {
        str.erase(str.find(part), part.length());
    }
    
    
    return str;
}

int main()
{
    string str;

    cout<<"Input string: ";
    getline(cin, str);

    string part;

    cout<<"Input part to erase: ";
    getline(cin, part);

    str = RemoveOccurences(str, part);

    cout<<"Output String: "<<str<<endl;

    return 0;
}