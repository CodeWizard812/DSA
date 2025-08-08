#include <bits/stdc++.h>
using namespace std;


void nextSmallerElement(vector<int> arr, vector<int>& next){

        //next Smaller Element
        stack<int> st;
        st.push(-1);;
        int n = arr.size();
        vector<int> ans(n);
        
        for(int i = n-1; i>=0; i--){
            while(st.top() != -1 && arr[st.top()] >= arr[i]){
                st.pop();
            }

            ans[i] = st.top();
            st.push(i);
            
        }

        for(int i = 0; i<n; i++){
            next.push_back(ans[i]);
            // cout<<ans[i]<<" ";
        }  //cout<<endl;

        return;
}


void prevSmallerElement(vector<int> arr, vector<int>& prev){

        //next Smaller Element
        stack<int> st;
        st.push(-1);;
        int n = arr.size();
        vector<int> ans(n);
        
        for(int i = 0; i<n; i++){
            while(st.top() != -1 && arr[st.top()] >= arr[i]){
                st.pop();
            }

            ans[i] = st.top();
            st.push(i);
            
        }

        for(int i = 0; i<n; i++){
            prev.push_back(ans[i]);
           // cout<<ans[i]<<" ";
        } //cout<<endl;

        return;
}

int getMaxArea(vector<int> &arr) {
    
    int n = arr.size();
    vector<int> next;
    nextSmallerElement(arr, next);

    vector<int> prev;
    prevSmallerElement(arr, prev);

    int maxArea = -1;

    for(int i = 0; i < n; i++){

        int l = arr[i];
        int b;

        if(next[i] == -1){
            next[i] = n;
        }

        b = next[i] - prev[i] -1;

        int area = l*b;

        maxArea = max(maxArea, area);
    }

    return maxArea;
}

int main(){
    vector<int> arr = {60, 20, 50, 40, 10, 50, 60};

    cout<<"Largest Rectangular Area Histograph: "<<getMaxArea(arr)<<endl;

    return 0;
}