#include <bits/stdc++.h>
using namespace std;

vector<int> nextSmallestElement(vector<int> arr){

    int n = arr.size();
    vector<int> ans(n);

    stack<int> st;
    st.push(-1);

    for(int i = n-1; i>=0; i--){
        while(st.top() != -1 && arr[st.top()] >= arr[i]){
            st.pop();
        }

        ans[i] = st.top();
        st.push(i);
    }

    return ans;
}

vector<int> prevSmallestElement(vector<int> arr){
    int n = arr.size();
    vector<int> ans(n);

    stack<int> st;
    st.push(-1);

    for(int i = 0; i<n; i++){
        while(st.top() != -1 && arr[st.top()] >= arr[i]){
            st.pop();
        }

        ans[i] = st.top();
        st.push(i);
    }

    return ans;
    
}

int largestHistograph(vector<int> arr){

    vector<int> next = nextSmallestElement(arr);

    vector<int> prev = prevSmallestElement(arr);

    int maxArea = 0;
    for(int i = 0 ; i< arr.size(); i++){
        int l = arr[i];
        if(next[i] == -1){
            next[i]=arr.size();
        }
        int b = next[i] - prev[i] - 1;
        int area = l*b;
        cout<<area<<" ";
        maxArea = max(maxArea, area);
    }cout<<endl;
    // cout<<maxArea<<endl;
    return maxArea;
}

int maxArea(int mat[][4]){

    vector<int> histograph(4);
    int j = 0;
    int area = 0;
    while(j< 4){
        for(int i = 0; i< 4; i++){
            if(mat[j][i]==0)
                histograph[i] = 0;
            else
                histograph[i] += mat[j][i];   
        }

        area = max(largestHistograph(histograph), area);
        j++;
    }
    
    return area;
}

int main(){
    int mat[4][4] = {{0, 1, 1, 0}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 0, 0}};
    
    int ans = maxArea(mat);
    cout<<"Ans: "<<ans<<endl;

    return 0;
}