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
    return 0;
}