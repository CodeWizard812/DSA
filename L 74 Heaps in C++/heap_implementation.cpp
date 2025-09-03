#include<iostream>
using namespace std;

class Heap{
    public:
        int arr[100];
        int size = 0;

        Heap(){
            arr[0] = -1;
            size = 0;
        }

        void insert(int val){
            size = size + 1;
            int index = size;
            arr[index] = val;
            
            while(index > 1){
                int parent = index/2;

                if(arr[index] > arr[parent]){
                    swap(arr[index], arr[parent]);
                    index = parent;
                }
                else{
                    return;
                }
            }
        }

        void print(){
            for(int i = 1; i <= size; i++){
                cout<<arr[i]<<" ";
            }cout << endl;
        }

        void deletion(){
            if(size == 0){
                cout<<"Nothing to delete"<<endl;
                return;
            }

            swap(arr[1], arr[size]);
            cout<<"Deleted: "<<arr[size]<<endl;
            size--;

            int index = 1;

            while (index <= size)
            {
                int l = index * 2;
                int r = (index * 2) +1;
                if(l <= size && arr[l] > arr[index]){
                    swap(arr[index], arr[l]);
                    index = l;
                }else if(r <= size && arr[r] > arr[index]) {
                    swap(arr[index], arr[r]);
                    index = r;
                }else{
                    return;
                }
            }
                
        }
};

void heapify(int * arr, int n , int i){
    int largest = i;
    int leftIndex = 2*i;
    int rightIndex = 2*i +1;

    if(leftIndex <= n && arr[leftIndex] > arr [largest]) largest = leftIndex;
    if(rightIndex <= n && arr[rightIndex] > arr [largest]) largest = rightIndex;

    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int *arr, int n){
    int size = n;

    while(size > 1){
        swap(arr[size], arr[1]);
        size--;
        
        heapify(arr, size, 1);
    }
    return;
}

int main(){
    Heap h;
    h.insert(50);
    h.insert(40);
    h.insert(35);
    h.insert(20);

    h.print();
    h.insert(21);

    h.print();
    h.insert(68);

    h.print();

    h.deletion();
    h.print();

    h.deletion();
    h.print();
    h.deletion();
    h.print();
    h.deletion();
    h.print();


    int arr [6] = {-1, 54, 53, 55, 52, 42};
    int n = 5;
    for(int i = n/2; i > 0; i--){
        heapify(arr, n, i);
    }

    for(int i = 1; i <= n ; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;

    heapSort(arr, n);
    for(int i = 1; i <= n ; i++){
        cout<<arr[i]<<" ";
    } cout<<endl;

    cout<<endl;

    return 0;
}