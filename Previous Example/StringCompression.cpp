#include <iostream>
#include <string.h>
using namespace std;

int compress(char* ch)
{
    int i=0;
    int ansind=0;
    int n=strlen(ch);
    while (i<n)
    {
        int j=i+1;
        while (j<n && ch[i]==ch[j])
        {
            j++;
        }
        
        ch[ansind++]=ch[i];

        int count=j-i;

        if (count>1)
        {
            string cnt= to_string(count);
            for (char c: cnt)
            {
                ch[ansind++]=c;
            }
            
        }
        i=j;
    }
    
    return ansind;
}

int main()
{
    char ch[100];
    cout<<"Input character array: ";
    cin>>ch;

    int len = compress(ch);
    
    cout<<"Output: "<<len<<endl;

    return 0;
}