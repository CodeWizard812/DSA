#include <iostream>
using namespace std;

//Code 1

// int main()
// {
//     int a=5;
//     int& b = a;

//     cout<< a<<" "<< b<<endl;
// }


//Code 2

// void update(int& m)
// {
//     m++;
//     m++;
//     return;
// }

// int main()
// {
//     int n=5;

//     update(n);
//     cout<< n<<endl;

//     return 0;
// }


//Code 3

int& update(int &b)/*Returning in form of refernce 
variable is a bad practice as after the function update 
terminates x, y(local variables) get cleared which can result in error*/
{
    int x=5;
    x=x+(b++);

    int & y= x;

    return y;
}

int main()
{
    int a=5;

    int x = update(a);
    cout<<a<<" ";
    cout<<x<<endl;

    return 0;
}