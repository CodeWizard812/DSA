//Move all zeros to the right(Love Method).
#include <iostream>
#include <vector>
using namespace std;

vector <int> moveZeros(vector <int> v)
{
    int i=0;
    int j=0;

    while(j<v.size())
    {
        if (v[j]!=0)
        {
            swap(v[i],v[j]);
            i++;
        }
        j++;   
    }
    return v;
}

int main()
{
    vector<int> v;

    v.push_back(5);
    v.push_back(2);
    v.push_back(0);
    v.push_back(0);
    v.push_back(7);
    v.push_back(5);
    v.push_back(0);
    v.push_back(0);
    v.push_back(2);


    vector <int> ans= moveZeros(v);

    cout<<"Output: "<<endl;
    for (int i: ans)
    {
        cout<<i<<" ";
    }

    return 0;
}