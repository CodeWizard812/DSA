#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

bool is_safe(int x,int y,vector<vector<int>>& m,int n,vector<vector<int>>& visited)
{
    if ((x>=0 && x<n) && (y>=0 && y<n) && (m[x][y]==1) && visited[x][y]==0)
    {
        return true;
    }
    else 
        return false;  
}

void solve(vector<string> &ans,vector<vector<int>>& m,int n, int x, int y,string path ,vector<vector<int>> visited)
{
    //base case
    if (x== (n-1) && y==(n-1))
    {
        ans.push_back(path);
        return;
    }
    
    visited[x][y]=1;

    //down
    int newx=x+1;
    int newy=y;
    if (is_safe(newx,newy, m,n,visited))
    {
        path.push_back('D');
        solve(ans, m,n, newx, newy, path , visited);
        path.pop_back();
    }
    
    //left
    newx=x;
    newy=y-1;
    if (is_safe(newx,newy, m,n,visited))
    {
        path.push_back('L');
        solve(ans, m,n, newx, newy, path , visited);
        path.pop_back();
    }

    //right
    newx=x;
    newy=y+1;
    if (is_safe(newx,newy, m,n,visited))
    {
        path.push_back('R');
        solve(ans, m,n, newx, newy, path , visited);
        path.pop_back();
    }

    //up
    newx=x-1;
    newy=y;
    if (is_safe(newx,newy, m,n,visited))
    {
        path.push_back('U');
        solve(ans, m,n, newx, newy, path , visited);
        path.pop_back();
    }

    visited[x][y]=0;
}

vector<string> maze(vector<vector<int>>& m,int n)
{
    vector<string> ans;
    if (m[0][0]==0)
    {
        return ans;/* code */
    }

    int srcx=0;
    int srcy=0;

    vector<vector<int>> visited = m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j]=0;            
        }   
    }
    
    string path="";

    solve(ans, m,n, srcx, srcy, path , visited);

    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    vector<vector<int>> m = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    int n = m[0].size();

    vector<string> ans = maze(m, n);

    cout<<"Output:"<<endl;

    for(int i=0; i < ans. size(); i++) 
        cout << ans[i] << ' ';

    return 0;
}