#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100];

    cout<<"Input string: ";
    gets(str);// cin.get(str, 100);
    
    int len= strlen(str);

    cout<<"Length of String: "<< len<<endl; 

    cout<<str<<endl; 

    char str1[100];
    strcpy(str1, str);

    cout<<str1<<endl;

    char str2[100];
    cout<<"Input string 2: ";
    gets(str2);

    int comp = strcmp(str, str2);

    cout<<"Comparison: "<<comp<<endl;

}