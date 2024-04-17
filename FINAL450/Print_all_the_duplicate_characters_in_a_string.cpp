//Print all the duplicate characters in a string
#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;

    cout<<"Enter String: ";
    getline(cin, str);

    sort(str.begin(), str.end());

    cout<<str<<endl;
    int count = 1;
    int i;
    for( i = 1; i < str.length(); i++){
        if(str[i] == str[i-1]){
            count++;
        }
        else{
            cout<<str[i-1]<<" "<<count<<endl;
            count = 1;
        }
    }
    cout<<str[str.length()-1]<<" "<<count<<endl;
    return 0;
}
