#include <iostream>
using namespace std;

void reverse_string(int s, int e, string& str)
{
    swap(str[s],str[e]);
    if (s>=e)
        return ;
    else
       return reverse_string(s+1, e-1, str);
  
}

int main()
{
    string str;
    cout<<"Input string: ";
    getline(cin, str);
    reverse_string(0, str.size()-1, str);
    cout<<"Reverse: "<<str<<endl;
    return 0;
}