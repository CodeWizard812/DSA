//Check presence of permutation of string
#include <iostream>
using namespace std;

bool checkequal(int a[], int b[])
{
    for (int i = 0; i < 26; i++)
    {
        if (a[i]!=b[i])
            return 0;        
    }
    return 1;
}

bool PermutationPresence(string s1,string s2)
{
    int count1[26]={0};
    for (int i = 0; i <s1.length() ; i++)
    {
        count1[s1[i]-'a']++;
    }

    int i=0;
    int winsize=s1.length();
    int count2[26]={0};
    while (i<winsize && i<s2.length())
    {
        count2[s2[i]-'a']++;/* code */
        i++;
    }
    
    if (checkequal(count1, count2))
        return 1;
    
    while (i<s2.length())
    {
        char newchar = s2[i];
        count2[newchar-'a']++; 

        char oldchar=s2[i-winsize];
        count2[oldchar-'a']--;

        i++;
        if (checkequal(count1, count2))
            return 1;
    }
    
    return 0;
}

int main()
{
    string str1;
    cout<<"Input String 1(lower case only): ";
    getline(cin, str1);

    string str2;
    cout<<"Input String 2(lower case only): ";
    getline(cin, str2);

    bool ans = PermutationPresence(str1, str2);

    if (ans==1)
    {
        cout<<"Present"<<endl;
    }
    else
    {
        cout<<"Not present"<<endl;
    }
    
    return 0;

}