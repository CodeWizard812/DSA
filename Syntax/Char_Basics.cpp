//Basic concept for char array
#include <iostream>
using namespace std;

int lengthofchar(char *name)
{
    int count=0;
    int i=0;

    while(name[i]!='\0')
    {
        count++;
        i++;
    }

    return count;
}

void reverse(char* ch, int n)
{
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        swap(ch[s++],ch[e--]);
    }
    return;
}

int main()
{
    char name[20];

    cout<<"Enter the name: ";
    cin>>name;

    cout<<"Output: "<<name<<endl;;

    int len= lengthofchar(name);

    cout<<"Length: "<<len<<endl;

    reverse(name, len);

    cout<<"Reversed: "<<name<<endl;

    return 0;
}