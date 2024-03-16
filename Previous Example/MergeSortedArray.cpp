//Merge two sorted array and form 3rd sorted array.
#include <iostream>
#include <vector>
using namespace std;

vector<int> mergearr(vector<int> a, vector<int> b)
{
    int i=0, j=0;

    vector<int> c;
    while (i<a.size() && j<b.size())
    {
        if (a[i]>=b[j])
        {
            c.push_back(b[j]);
            j++;
        }
        else
        {
            c.push_back(a[i]);
            i++;
        }
        
    }

    while (i<a.size())
    {
        c.push_back(a[i]);
        i++;
    }

    while (j<b.size())
    {
        c.push_back(b[j]);
        j++;
    }
    
    
    return c;
}

int main()
{
    vector <int> a;

    a.push_back(1);
    a.push_back(5);
    a.push_back(6);
    a.push_back(9);
    a.push_back(11);
    a.push_back(19);

    vector <int> b;

    b.push_back(7);
    b.push_back(8);
    b.push_back(15);


    vector<int> ans=mergearr(a,b);

    cout<<"Output: "<<endl;
    for (int i: ans)
    {
        cout<<i<<" ";
    }
    
    return 0;
}