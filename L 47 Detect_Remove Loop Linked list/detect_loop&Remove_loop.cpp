#include <iostream>
#include <map>
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

//Approach 2 : T.C. = O(n) and S.C. = O(1)
//Floyd loop detection method
bool detect_loop(Node* head)
{   
    Node* slow= head;
    Node* fast= head;

    while(fast!=NULL && slow!=NULL)
    {
        fast = fast->next;
        if(fast!=NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;
        //fast->data will be part of loop not the start of loop 
        if(fast == slow)
        {
            slow= head;
            //found using mathematical equation A+B = _*C 
            while(slow!= fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            cout<<endl<<"Loop starts at "<<slow->data<<endl;
            return true;
        }    
    }

    return false;
}        


/*Approach 1 : T.C.= O(n) and S.C.= O(n)*/
// bool detect_loop(Node* head)
// {
//     if(head==NULL)
//         return false;
    
//     map <Node* , bool> visited;

//     Node* temp = head;
//     while(temp != NULL)
//     {
//         if(visited[temp]==true)
//         {
//             cout<<endl<<"Loop starts at "<<temp->data<<endl;
//             return true;
//         }
//         visited[temp] = true;

//         temp = temp->next;   
//     }
//     return false;
// }

void removeLoop(Node* head)
{
    if(head == NULL)
        return;
    
    map <Node* , bool> visited;

    Node* temp = head;
    while(temp != NULL)
    {
        if(visited[temp->next]==true)
        {
            cout<<endl<<"Loop starts at "<<temp->next->data<<endl;
            temp->next = NULL;
            cout<<"Loop Removed"<<endl;
            return;
        }
        visited[temp] = true;

        temp = temp->next;   
    }
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

    tail->next = head->next->next;

    // int position;
    // cout<<"Enter element and position: ";
    // cin>>element>>position;

    // insert_at_pos(head, tail, position, element);
    // print(head);

    if(detect_loop(head))
        cout<<endl<<"Loop detected"<<endl;
    else
        cout<<endl<<"Not detected"<<endl;

    removeLoop(head);

    if(detect_loop(head))
        cout<<endl<<"Loop detected"<<endl;
    else
        cout<<endl<<"Not detected"<<endl;
    return 0;
}