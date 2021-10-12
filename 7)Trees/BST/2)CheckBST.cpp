#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *left;
    Node *right;
    int data;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int findRightMin(Node *root)
{
    Node *temp = root;
    while(temp->left!=NULL)
        temp = temp->left;
    return temp->data;    
}

int findLeftMax(Node *root)
{
    Node *temp = root;
    while(temp->right!=NULL)
        temp = temp->right;
    return temp->data;
}

bool checkBST(Node *root)
{
    if(root==NULL) {
        return true;
    }

    if(root->left!=NULL)
    {
        int leftMax = findLeftMax(root->left);
        if(leftMax > root->data)
        {
            return false;
        }
    }

    if(root->right!=NULL){
        int rightMin = findRightMin(root->right);    
        if(rightMin < root->data)
        {
            return false;
        }
    }      

    if(!checkBST(root->left) || !checkBST(root->right))
    {
        return false;
    }

    return true;
}

int main(){
    Node *root = new Node(7);
    Node *a = new Node(2);
    Node *b = new Node(10);
    //Node *c = new Node(8);
    Node *c = new Node(6);
    Node *d = new Node(14);

    root->left = a;
    root->right = b;

    b->left = c;
    b->right = d;

    if(checkBST(root)==true)
    {
        cout<<"BST";
    }
    else{
        cout<<"Not BST";
    }

    return 0;
}