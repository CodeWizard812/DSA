#include <bits/stdc++.h>
using namespace std;

class Nstack{
    int *arr;
    int s;
    int n;

    int * top;
    int * next;
    int freespot;

    public:
        Nstack(int n, int s){
            this->s = s;
            this->n = n;

            arr = new int[n];
            top = new int[s];
            next = new int[n];

            for(int i = 0; i < s; i++){
                top[i] = -1;
            }

            for(int i = 0; i < n-1; i++){
                next[i] = i+1;
            }
            next[n-1] = -1;

            freespot = 0;
        }

        bool push(int val, int st){
            if(freespot == -1)
                return 0;
            
            int index = freespot;

            freespot = next[index];

            next[index] = top[st-1];

            top[st-1] = index;

            arr[index] = val;

            return true;
        }

        int pop(int st){
            if(top[st-1] == -1){
                return -1;
            }

            int index = top[st-1];
            top[st-1] = next[index];
            next[index] = freespot;
            freespot = index;

            return arr[index];
        }

};

int main(){
    Nstack s(6,3);

    cout<<s.push(10, 1)<<endl;
    cout<<s.push(20, 1)<<endl;
    cout<<s.push(30, 2)<<endl;

    cout<<s.pop(1)<<endl;


    return 0;
}