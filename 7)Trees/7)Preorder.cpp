#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};


void preOrder(Node *root)
{
    if(root == NULL)
        return;
    
    cout<<root->data<<" ";

    preOrder(root->left);   

    preOrder(root->right);
}

int main()
{
    Node *a = new Node(12);
    Node *b = new Node(16);
    Node *c = new Node(7);
    Node *d = new Node(8);
    Node *e = new Node(5);

    a->left = b;
    a->right = c;

    b->left = d;
    b->right = e;

    preOrder(a);
    return 0;
}