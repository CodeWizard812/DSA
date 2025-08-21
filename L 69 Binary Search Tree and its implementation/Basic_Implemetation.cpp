#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int d){
            this->data = d;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* insertIntoBST(Node* root, int d){
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d < root->data){
        root->left = insertIntoBST(root->left, d);
    }
    else{
        root->right = insertIntoBST(root->right, d);
    }

    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data != -1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    
    inorder(root->right);
}

void preorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<' ';
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<' ';
}

void levelOrderTraversal(Node* root)
{   
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
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

Node* findMax(Node *root) {
    if(root==NULL){
        return NULL;
    }
    while(root->right!=NULL){
        root = root->right;
    }
    return root;
}

Node* findMin(Node *root) {
    if(root==NULL){
        return NULL;
    }
    while(root->left!=NULL){
        root = root->left;
    }
    return root;
}

Node* deleteFromBST(Node* root,int val){
    if(root==NULL){
        return NULL;
    }

    if(root->data == val){
        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }//1 child
        else if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }//1 child
        else if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }//2 child
        else{
            int minvalue = findMin(root->right)->data;
            root->data = minvalue;
            root->right = deleteFromBST(root->right, minvalue);
            return root;
        }
    }else if(root->data > val){
        root->left = deleteFromBST(root->left, val);
        return root;
    }else{
        root->right = deleteFromBST(root->right, val);
        return root;
    }

}

int main(){
    Node* root = NULL;
    //10 5 21 4 6 7 -1
    cout<<"Enter data to create BST: "<<endl;
    takeInput(root);

    cout<<endl;
    //inorder
    inorder(root);

    cout<<endl;
    //preorder
    preorder(root);

    cout<<endl;
    //postorder
    postorder(root);

    cout<<endl<<"Level Order Traversal: ";
    //levelOrderTraversal
    levelOrderTraversal(root);

    //Minimum value
    cout<<"Minimum Value: "<<findMin(root)->data<<endl;

    //Maximum value
    cout<<"Maximum Value: "<<findMax(root)->data<<endl;

    //Deletion
    int val;
    cout<<"Enter value to delete: ";
    cin>>val;
    root = deleteFromBST(root, val);

    cout<<endl<<"Level Order Traversal: ";
    //levelOrderTraversal
    levelOrderTraversal(root);

}