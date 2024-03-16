#include <iostream>
using namespace std;

void say_digits(int n)
{
    string arr[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (n==0)
        return;
    
    int digit = n%10;
    say_digits(n/10);
    
    cout<<arr[digit]<<" ";

    return;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<"Digits are: ";
    say_digits(n);
    return 0;
}