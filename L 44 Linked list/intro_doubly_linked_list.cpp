#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next!= NULL)
        {
            this -> next=NULL;
            delete next;
        }
        cout<<"Memory deleted for value "<<value<<endl;
    }

};

void insert_at_head(Node* &head, Node* &tail, int d)
{
    Node* temp = new Node(d);
    //empty list
    if (head==NULL)
    {
        head = temp; 
        tail = temp; 
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    return;
}

void insert_at_tail(Node* &tail,Node* &head, int d)
{
    Node* temp = new Node(d);
    if (tail==NULL)
    {
        tail=temp;
        head=temp;/* code */
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    return;
}

void insert_at_pos(Node*& head, Node*& tail, int d, int pos)
{
    //for start
    if (pos==1)
    {
        insert_at_head(head,tail, d);
        return;
    }

    Node* pos_node = new Node(d);
    Node* temp= head;
    int count=1;
    while(count<(pos-1))
    {
        temp=temp->next;
        count++;
    } 

    if(temp->next==NULL)
    {
        insert_at_tail(tail,head, d);
        return;
    }
    pos_node->next = temp->next;
    temp->next->prev = pos_node;
    temp->next = pos_node;
    pos_node->prev = temp;
}

void delete_pos(Node* &head, Node*& tail, int pos)
{
    if (pos==1)
    {
        Node * temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }
    else
    {
        Node* curr = head;
        Node* pre = NULL;
        int count = 1;

        while(count < (pos))
        {
            pre = curr;
            curr = curr->next;
            count++;
        }
        if (curr->next==NULL)
        {
            tail = pre;
            pre->next= NULL ;/* code */
        }
        else
        {
            pre->next = curr->next;
            curr->next->prev = pre;
        }
        
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
    }
    
}

void print(Node* &head)
{
    Node* temp = head;
    cout<<"Printing Linked List: ";
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* node1= new Node(10);
    Node* head= node1;
    Node* tail = node1;

    print(head);

    int element;
    cout<<"Enter new data(head): ";
    cin>>element;

    insert_at_head(head,tail, element);

    print(head);

    cout<<"Enter new data(head): ";
    cin>>element;

    insert_at_head(head,tail, element);

    print(head);

    cout<<"Enter new data(tail): ";
    cin>>element;

    insert_at_tail(tail,head, element);

    print(head);

    cout<<"Head "<<head->data<<endl<<"Tail "<<tail->data<<endl;

    int position;
    cout<<"Enter new data & position: ";
    cin>>element>>position;

    insert_at_pos(head, tail, element, position);

    print(head);

    cout<<"Head "<<head->data<<endl<<"Tail "<<tail->data<<endl;

    cout<<"Enter position to delete: ";
    cin>>position;

    delete_pos(head, tail, position);

    print(head);

    cout<<"Head "<<head->data<<endl<<"Tail "<<tail->data<<endl;

    return 0;
}