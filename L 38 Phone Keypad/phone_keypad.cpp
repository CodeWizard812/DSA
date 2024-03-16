#include <iostream>
#include <vector>
using namespace std;

void solve(string digits, int index, string output, 
           vector<string>& ans, string mapping[])
{
    if (index>= digits.length())
    {
        ans.push_back(output);
        return;
    }

    int num = digits[index] - '0';//without '0' ASCII value of digits[index] will be given to num
    string value = mapping[num];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(digits, index+1, output, ans, mapping);
        output.pop_back();
    }
}

vector <string> letter_combin(string digits)
{
    vector <string> ans;
    if (digits.length()==0)
    {
        return ans;/* code */
    }
    
    string mapping[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    int index=0;
    string output;

    solve(digits, index, output, ans, mapping);

    return ans; 
}


int main()
{
    string digits;

    cout<<"Enter digits: ";
    getline(cin, digits);
    vector <string> ans = letter_combin(digits);

    cout<<"Output:"<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<' ';
    }
    return 0;
}