//Check whether a number is palindrome or not ignoring whitespaces and special characters.
#include <iostream>
#include <vector>
using namespace std;

int checkvalid(char* ch,int n)
{
    char temp[n];
    int j=0;
    for (int i = 0; i < n; i++)
    {
       if ((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z') || (ch[i]>='0' && ch[i]<='9'))
        {
            temp[j]=ch[i];
            j++;
        } 
    }
    
    for (int i = 0; i < j; i++)
    {
        ch[i]=temp[i];
    }
    ch[j]='\0';
    
    return j;
}

void toLowercase(char* ch, int n)
{   
    for (int i = 0; i < n; i++)
    {
        if (ch[i]>='A' && ch[i]<='Z')
        {
            ch[i] = ch[i] - 'A' + 'a'; 
        }
    } 
    return;   
}

bool Palindrome(char* ch, int n)
{
    int s=0;
    int e=n-1;

    while (s<=e)
    {
        if (ch[s] != ch[e])
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
    char ch[100];

    cout<<"Enter the string: ";
    cin>>ch;

    int i=0;
    int count=0;
    while (ch[i]!='\0')
    {
        count++;
        i++;
    }

    toLowercase(ch, count);

    int countnew = checkvalid(ch, count);
    
    bool ans = Palindrome(ch,countnew);

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