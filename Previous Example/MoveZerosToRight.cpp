//Move all zeros to the right.
#include <iostream>
#include <vector>
using namespace std;

vector <int> moveZeros(vector <int> v)
{
    int i=0;

    vector<int> c(v.size(),0);
    int j=0;

    while(i<v.size()-1)
    {
        if (v[i]!=0)
        {
            c[j]=v[i];
            j++;
        }
        i++;
    }
    return c;
}

int main()
{
    vector<int> v;

    v.push_back(5);
    v.push_back(0);
    v.push_back(9);
    v.push_back(0);
    v.push_back(7);
    v.push_back(0);

    vector <int> ans= moveZeros(v);

    cout<<"Output: "<<endl;
    for (int i: ans)
    {
        cout<<i<<" ";
    }

    return 0;
}