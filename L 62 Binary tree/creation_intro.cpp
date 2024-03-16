#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildtree(node* root)
{
    cout<<"Enter data: "<<endl;
    int data;
    cin>>data;

    root= new node(data);

    if(data == -1)
    {
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildtree(root->left);

    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildtree(root->right);

    return root;
}

void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {//purnana level complete traverse ho chuka h
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<' ';
            if(temp->left)
            {
                q.push(temp->left);
            }  
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }

    inorder(root->left);
    cout<<root->data<<' ';
    inorder(root->right);
}

void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<' ';
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<' ';
}

void buildLevelOrderTraversal(node* &root)
{
    queue<node*> q;
    int data;
    cout<<"Enter root node: "<<endl;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        int leftData;
        cout<<"Enter left node data of "<<temp->data<<endl;
        cin>>leftData;

        if(leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        int rightData;
        cout<<"Enter right node data of "<<temp->data<<endl;
        cin>>rightData;

        if(rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    node* root = NULL;

    buildLevelOrderTraversal(root);
    //creating a tree
    // root = buildtree(root);

    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    //level order
    cout<<endl<<"Printing output "<<endl;
    levelOrderTraversal(root);
    //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    cout<<"Inorder Traversal: "<<endl;
    inorder(root);

    cout<<endl<<"Preorder Traversal: "<<endl;
    preorder(root);

    cout<<endl<<"Postorder Traversal: "<<endl;
    postorder(root);

    return 0;
}

 