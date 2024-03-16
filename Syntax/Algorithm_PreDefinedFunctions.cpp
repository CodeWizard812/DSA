#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(6);
    v.push_back(32);
    v.push_back(3);
    v.push_back(4);
    v.push_back(15);

    cout<<"Is 4 present?? "<<binary_search(v.begin(),v.end(),4)<<endl;

    cout<<"Position of 4: "<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    cout<<"Upper Bound(Last index): "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

    int a=3;
    int b=6;

    cout<<"Maximum: "<<max(a,b)<<endl;

    cout<<"Minimum: "<<min(a,b)<<endl;

    swap(a,b);

    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;

    string st="abcde";
    reverse(st.begin(),st.end());
    cout<<"Reversed string: "<<st<<endl;

    cout<<"Before Rotate: ";
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    rotate(v.begin(),v.begin()+3,v.end());//3 denotes the index from where you want to rotate.

    cout<<"After Rotate: ";
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());
    cout<<"Sorted: ";
    for (int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;
}