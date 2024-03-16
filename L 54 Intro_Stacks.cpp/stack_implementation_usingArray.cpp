#include <iostream>
using namespace std;

class Stack 
{
    public:
    //properties
    int *arr;
    int size;
    int top;

    //functions/behaviours
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        this->top++;
        if(this->top < this->size)
        {
            this->arr[top] = element;
        }
        else
        {
            cout<<"Stack Overflow"<<endl;
        }
        return;
    }

    void pop()
    {
        if(this->top == -1)
        {
            cout<<"Stack Underflow"<<endl;
             
        }
        else
        {
            this->top--;
        }
        return;
    }

    int peek()
    {
        if(top>=0 )
            return arr[top];
        else
        {
            cout<<"Stack underflow"<<endl;
            return -1;
        }
    }

    bool empty()
    {
        if(this->top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};

int main()
{
    Stack s(4);

    s.push(2);
    s.push(6);
    s.push(3);
    s.push(7);
    s.push(8);

    cout<<"Top: "<<s.peek()<<endl;

    s.pop();

    cout<<"Top: "<<s.peek()<<endl;

    cout<<"Is Empty: "<<s.empty()<<endl;

    s.pop();
    s.pop();

    cout<<"Top: "<<s.peek()<<endl;

    return 0;
}