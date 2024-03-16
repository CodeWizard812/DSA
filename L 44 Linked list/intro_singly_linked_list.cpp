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
        this->data=data;
        this->next=NULL;
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

void insert_head_node(Node* &head,int d)//head is passed by reference as head will change 
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insert_tail_node(Node* &tail, int d)
{
    Node* temp =new Node(d);
    tail->next = temp;
    tail = temp;
}

void insert_at_pos(Node* &tail,Node* &head,int pos, int d)
{
    //insert at start
    if (pos==1)
    {
        insert_head_node(head, d);
        return;
    }
    
    Node* temp=head;
    int cnt=1;

    while(cnt<(pos-1))
    {
        temp = temp->next;
        cnt++;
    }

    //insert at last(to update tail it is necessary)
    if (temp->next==NULL)
    {
        insert_tail_node(tail,d);
        return;
    }
    
    Node* nodeinsert= new Node(d);
    nodeinsert->next=temp->next;
    temp->next = nodeinsert;

    return;
}

void delete_at_pos(Node* &head,Node* &tail, int pos)
{
    if (pos==1)
    {
        //deleting start node
        Node* temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        //middle or last node
        Node* prev=NULL;
        Node* curr= head;
        int cnt=1;

        while(cnt<pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        
        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
        //updates tail
        if (prev->next==NULL)
        {
            tail=prev;
        }
        
    }
    return;
}

void delete_data(Node* &head,Node* &tail, int d)
{
    if (head->data==d)
    {
        //deleting start node
        Node* temp = head;
        head = head->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        //middle or last node
        Node* prev=NULL;
        Node* curr= head;

        while(1)
        {   
            if (curr->data==d)
            {
                break;
            }
            prev = curr;
            curr = curr->next;
        }

        
        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
        if (prev->next==NULL)
        {
            tail=prev;
        }
    }
    return;
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
    //Created new node
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    //head pointed to node1
    Node* head = node1;
    int newdata;
    cout<<"Enter new data(head): ";
    cin>>newdata;

    insert_head_node(head,newdata);
    print(head);

    cout<<"Enter new data(tail): ";
    cin>>newdata;    

    Node* tail =node1;
    insert_tail_node(tail,newdata);
    print(head);

    cout<<"Enter new data(tail): ";
    cin>>newdata;

    insert_tail_node(tail,newdata);
    print(head);

    int pos;
    
    cout<<"Enter new data & position: ";
    cin>>newdata>>pos;

    insert_at_pos(tail,head,pos,newdata);
    print(head);

    cout<<"Head "<<head->data<<endl<<"Tail "<<tail->data<<endl;

    cout<<"Enter delete position: ";
    cin>>pos;

    delete_at_pos(head,tail, pos);

    print(head);

    cout<<"Head "<<head->data<<endl<<"Tail "<<tail->data<<endl;

    cout<<"Enter delete element: ";
    cin >> newdata;

    delete_data(head,tail, newdata);

    print(head);

    cout<<"Head "<<head->data<<endl<<"Tail "<<tail->data<<endl;

    return 0;
}