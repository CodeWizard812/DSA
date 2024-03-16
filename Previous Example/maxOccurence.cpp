#include <iostream>
using namespace std;

char maxOccurence(string str)
{
    int arr[26]={0};
    int i=0;

    while(i<str.length()) 
    {
        if (str[i]>='a' && str[i]<='z')
        {
            arr[str[i]-97]++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            arr[str[i]-65]++;
        }
        i++;  
    }

    int maxch=0;
    int ans;
    for (int i = 0; i < 26; i++)
    {
        if(arr[i]>maxch)
        {
           maxch= arr[i];
           ans=i; 
        }
        
    }
    return (ans + 'a');   
}

int main()
{
    string str;
    cout<<"Input string: ";
    getline(cin, str);

    char ans = maxOccurence(str);

    cout<<"Max Occuring character is "<<ans<<endl;

    return 0;

}