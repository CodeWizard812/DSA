#include <bits/stdc++.h>
using namespace std;

bool ifPossible(vector<int> arr, int n, int m, int mid){
    int woodSum = 0;
    for(int i = 0; i< n; i++){
        if(arr[i] < mid){
            continue;
        }
        woodSum += (arr[i]-mid);
        if(woodSum>=m){
            return true;
        }
    }
    return false;
}

int minimumHeight(vector<int> arr, int n, int m){
    int s = 0;
    int e = 0;
    
    for(int i = 0; i< n; i++){
        e = max(arr[i], e);
    }

    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(ifPossible(arr, n, m, mid)){
            ans = mid;
            s = mid+1;
        }else{
            e = mid - 1;
        }
        mid = s+ (e-s)/2;
    }

    return ans;

}


int main(){
    int n, m;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter m: ";
    cin>>m;
    vector<int> arr(n);
    cout<<"Enter array: "<<endl;
    
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Minimum Height: "<<minimumHeight(arr, n, m)<<endl;

    return 0;
}