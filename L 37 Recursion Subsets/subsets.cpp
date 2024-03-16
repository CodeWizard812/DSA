#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans)
{
    //base case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }
    //exclude
    solve(nums, output, index+1, ans);

    //include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index+1, ans);
}

vector<vector<int>> subsets(vector<int>& nums)
{
    vector<vector<int>> ans;
    vector <int> output;
    int index = 0;

    solve(nums, output, index, ans);
    return ans;
}

int main()
{
    vector <int> a;

    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    // a.push_back(4);

    vector<vector<int>> ans =  subsets(a);

    cout<<"Output:"<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";/* code */
        }
        cout<<endl;
    }
    
    return 0;
}