#include <iostream>
using namespace std;
 
// Macro definition
#define AREA(l, b) (l * b)
 
// Driver Code
int main()
{
    // Given lengths l1 and l2
    int l1 = 10, l2 = 10, area;
 
    // Find the area using macros
    area = AREA(l1, l2);
 
    // Print the area
    cout << "Area of rectangle"
         << " is: "<<
        area<<endl;
 
    return 0;
}