#include <iostream>
using namespace std;

string RemoveDuplicates(string str)
{
    int i=0;
    while(i<str.length())
    {
        if (str[i]==str[i+1])
        {
            str.erase(i,2);
            i=0;
            continue;
        }
        i++;
    }
    return str;
}

int main()
{
    string str;
    cout<<"Input string: ";
    getline(cin,str);

    str = RemoveDuplicates(str);

    cout<<"Output: "<<str<<endl;

    return 0;
}
