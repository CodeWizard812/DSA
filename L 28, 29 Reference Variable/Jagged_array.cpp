// C++ Program to implement Jagged array
#include <iostream>
using namespace std;
  
int main()
{ 
    int row, col;
    row = 3;

    int** arr = new int*[row];
    int sizes[] = { 4, 2, 3 };

    for (int i = 0; i < row; i++) 
    {
        *(arr + i) = new int[sizes[i]];
    }
  
    int num = 1;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < sizes[i]; j++) {
            arr[i][j] = num++;
        }
    }
  
    cout << "Elements in matrix: " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < sizes[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
  
    return 0;
}