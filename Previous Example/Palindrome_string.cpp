//Palindrome String.
#include <iostream>
#include <vector>
using namespace std;

string toLowercase(string str)
{   
    string temp;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] - 'A' + 'a'; 
        }
    }

    temp = str;
    return temp;   
}

string checkvalid(string str)
{
    int j=0;
    for (int i = 0; i < str.length(); i++)
    {
       if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || (str[i]>='0' && str[i]<='9'))
        {
            str[j]=str[i];
            j++;
        } 
    }
    
    str.erase(j,str.length()-j);
    
    return str;
}

bool Palindrome(string str)
{
    int s=0;
    int e=str.length()-1;

    while (s<=e)
    {
        if (str[s] != str[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }      
    }

    return 1;   
}

int main()
{
    string str;

    cout<<"Input string: ";
    getline(cin, str);

    str = toLowercase(str);

    str = checkvalid(str);
    
    bool ans = Palindrome(str); 

    if (ans==1)
    {
        cout<<"Palindrome."<<endl;
    }
    else
    {
        cout<<"Not a palindrome."<<endl;
    }

    return 0;
}