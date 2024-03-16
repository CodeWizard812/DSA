#include <iostream>
using namespace std;

string ReverseChar(string str)
{
    int s=0, e=0;
    while (e<=str.length())
    {
        if (str[e]==' ' || e==str.length())
        {
            int el= e-1;
            while (s<el)
            {
                swap(str[s], str[el]);
                s++;
                el--;
            }
            s=e+1;
        }
        e++;
    }
  
    return str;
}

int main()
{
    string str;
    cout<<"Input String: ";
    getline(cin, str);

    str = ReverseChar(str);

    cout<<"Output String: "<<str<<endl;

    return 0;
}