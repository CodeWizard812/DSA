#include <iostream>
#include<vector>
using namespace std;

void solve(vector <string>& ans,string str, int index)
{
    //base case
    if (index >= str.length())
    {
        ans.push_back(str);
        return;
    }

    for (int i = index; i < str.length(); i++)
    {
        swap(str[index],str[i]);
        solve(ans, str, index+1); 
        // swap(str[index],str[i]);
    }
    
}

vector <string> permutations(string& str)
{
    int index =0;
    vector <string> ans;
    solve(ans,str, index);

    return ans;
}

int main()
{
    string str;

    cout<<"Enter str: ";
    getline(cin, str);
    vector <string> ans = permutations(str);

    cout<<"Output:"<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<' ';
    }
    return 0;   
}