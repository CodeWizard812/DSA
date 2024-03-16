#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

     //constructor 
    Node (int data)
    {
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node()
    {
        int value = this->data;
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for data "<<value<<endl;
    }
};

/*in circular everything can be done 
using tail so no need to create head*/
void insertNode(Node* &tail, int e, int d)
{//assuming element is present in list
    //empty list
    if (tail == NULL)
    {
        Node* temp = new Node(d);
        tail = temp;
        temp->next = tail;
        return;
    }
    else
    {//non empty list
        Node* curr = tail;

        while(curr->data != e)
        {
            curr = curr->next;
        }

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
        return;
    }
    cout<<"Element not found"<<endl;
    return;
}

void deleteNode(Node* &tail, int d)
{
    //empty list
    if (tail==NULL)
    {
        cout<<"List is Empty"<<endl;
        return;
    }
    
    Node* temp = tail;
    Node* curr = tail->next;
    while (curr->data != d)
    {
        temp = curr;
        curr = curr->next;
    }
    
    temp->next = curr->next;
    //tail on element to delete
    if (tail==curr)
    {
        tail = temp;
    }
    //1 node
    if(curr==temp)
    {
        tail=NULL;
    }
    
    curr->next = NULL;
    delete curr;
}

void print(Node* tail)
{
    if (tail==NULL)
    {
        cout<<"List is Empty"<<endl;
        return;
    }
    
    Node* temp = tail;
    cout<<"Printing: ";
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;        
    }while(temp != tail);
    cout<<endl;
}

int main()
{
    Node* tail = NULL;

    int element;
    int data;
    cout<<"Enter data to insert: ";
    cin>>data;

    insertNode(tail, element, data);

    print(tail);

    cout<<"Enter data to insert: ";
    cin>>data;
    cout<<"Enter element to insert after: ";
    cin>>element;

    insertNode(tail, element, data);

    print(tail);

    cout<<"Enter data to insert: ";
    cin>>data;
    cout<<"Enter element to insert after: ";
    cin>>element;

    insertNode(tail, element, data);

    print(tail);

    cout<<"Enter data to insert: ";
    cin>>data;
    cout<<"Enter element to insert after: ";
    cin>>element;

    insertNode(tail, element, data);

    print(tail);

    //cout<<"Tail: "<<tail->data<<endl;

    cout<<"Enter data to delete: ";
    cin>>data;
    deleteNode(tail, data);
    print(tail);

    cout<<"Enter data to delete: ";
    cin>>data;
    deleteNode(tail, data);
    print(tail);

    cout<<"Tail: "<<tail->data<<endl;

    return 0;
}