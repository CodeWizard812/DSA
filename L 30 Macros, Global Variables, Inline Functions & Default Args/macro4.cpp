#include <iostream>
using namespace std;
 
// Multi-line Macro definition
#define ELE 1, \
            2, \
            3
 
// Driver Code
int main()
{
    // Array arr[] with elements
    // defined in macros
    int arr[] = { ELE };
 
    // Print elements
    printf("Elements of Array are:\n");
 
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << ' ';
    }
 
    return 0;
}