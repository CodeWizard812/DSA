//Reverse after a given Index
#include <iostream>
#include <vector>
using namespace std;

vector<int> rotate(vector <int> v, int s)
{
    int end=v.size()-1;

    while (s<=end)
    {
        swap(v[s],v[end]);
        s++;
        end--;
    }
    
    return v;
}

int main()
{
    vector <int> v;

    v.push_back(5);
    v.push_back(13);
    v.push_back(9);
    v.push_back(23);
    v.push_back(7);
    v.push_back(1);  

    int idx;
    cout<<"Enter the index after which array will be reversed: ";
    cin>>idx;

    vector<int> ans = rotate(v, idx+1);

    cout<<"Output: "<<endl;
    for (int i : ans)
    {
        cout<<i<<" ";
    }
    
    return 0;

}