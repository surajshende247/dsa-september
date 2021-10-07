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

void widthBT(Node *root)
{
    queue<Node *> q;
    q.push(root);    
    int k = q.size();

    int max=-1;


while(!q.empty())
{
    k = q.size();
    for(int i=1; i<=k; i++)
   {
       if(max<k)
            max=k;
            
        Node *temp = q.front();
        q.pop();

        if(temp->left!=NULL)
            q.push(temp->left);
        
        if(temp->right!=NULL)
            q.push(temp->right);
    }
}
    cout<<"Width of BT: "<<max;
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
    

    widthBT(a);
    return 0;
}