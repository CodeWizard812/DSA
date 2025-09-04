#include <iostream>
#include<map>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> m;


    //Insertion O(1)
    //inserting in map using pair
    pair<string, int> p = make_pair("bahi", 7);
    m.insert(p);

    pair<string, int> pa("edith", 5);
    m.insert(pa);

    //directly inseting declaring key
    m["groot"] = 9;

    //printing data O(n)
    for(auto i : m) cout<<i.first<<" "<<i.second<<endl;

    //updates value for a key as key is a unique parameter, value not; 
    m["groot"] = 6;
    for(auto i : m) cout<<i.first<<" "<<i.second<<endl;

    //Search O(1)
    cout<<m["groot"]<<endl;
    cout<<m.at("edith")<<endl;
    // cout<<m.at("unknownKey")<<endl; //it will throw error of OUT OF RANGE as key is absent
    cout<<m["unknownKey"]<<endl; // although key is absent, it will create one with value 0. Hence output will be 0.
    

    //Erase O(1)
    m.erase("groot");//Removes groot key value pair.
    for(auto i : m) cout<<i.first<<" "<<i.second<<endl;

    //Size O(1)
    cout<<m.size()<<endl;

    //count (absent-> 0, present->1) O(1)
    cout<<m.count("edith")<<endl;

    //printing using accessing iterator
    unordered_map<string, int> :: iterator it = m.begin();
    cout<<"   Iterator Method"<<endl;
    while(it!=m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }


}