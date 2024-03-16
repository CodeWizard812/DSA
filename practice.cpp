#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this->data = d;
        this->next=NULL;
    }
};

void insert_at_head(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insert_at_tail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insert_at_pos(Node* &head,Node* &tail, int pos, int d)
{
    //first element
    if (pos==1)
    {
        insert_at_head(head, d);
        return;
    }
    
    Node* pos_node = new Node(d);
    Node* temp= head;
    int count= 1;
    while(count<(pos-1))
    {
        temp = temp->next;
        count++;
    }

    //last position(to update tail it is necessary)
    if (temp->next==NULL)
    {
        insert_at_tail(tail, d);
        return;
    }
    

    pos_node->next=temp->next;
    temp->next=pos_node;
}

void print(Node* & head)
{
    Node* temp=head;
    cout<<"Printing: ";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return;
}

int main()
{
    Node* node1 = new Node(6);

    int element;
    cout<<"Enter head element: ";
    cin>>element;

    Node* head= node1;
    insert_at_head(head, element);

    print(head);

    cout<<"Enter head element: ";
    cin>>element;

    insert_at_head(head, element);

    print(head);

    Node* tail = node1;
    cout<<"Enter tail element: ";
    cin>>element;

    insert_at_tail(tail, element);

    print(head);

    cout<<"Enter tail element: ";
    cin>>element;

    insert_at_tail(tail, element);

    print(head);

    int position;
    cout<<"Enter element and position: ";
    cin>>element>>position;

    insert_at_pos(head, tail, position, element);

    print(head);

    cout<<head->data<<endl;
    cout<<tail->data<<endl;

    return 0;
}