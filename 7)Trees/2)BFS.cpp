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

void bfs(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        cout<<temp->data<<" ";

        if(temp->left!=NULL)
            q.push(temp->left);
        
        if(temp->right!=NULL)
            q.push(temp->right);
    }
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
    

    bfs(a);
    return 0;
}