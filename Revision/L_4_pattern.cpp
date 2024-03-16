#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>> n;

    int row = 1;
    while(row<=n){
        //spaces
        int spaces = n-row;
        while(spaces){
            cout<<"  ";
            spaces--;
        }

        int col = 1;
        while(col<=row){
            cout<<col<<" ";
            col++;
        }

        int col2 = 1;
        while(col2<row){
            cout<<row-col2<<" ";
            col2++;
        }
        cout<<endl;
        row++;
    }
}