//Move all negative numbers to beginning and positive to end with constant extra space
#include <iostream>
using namespace std;

int main(){
    int arr[10000];
    int n;
    cout<<"Input Size: ";
    cin>>n;
    cout<<endl<<"Enter array elements: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int j = 0;
    int i = 0;

    while(i < n){
        if(arr[i] < 0){
            if(i!=j)
            {
                swap(arr[i], arr[j]);
                j++;
                i++;
            }
            else{
                i++;
                j++;
            }
        }
        else{
            i++;
        }
    }

    cout<<"Output: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}