#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void traverseCLL(Node *node)
{
    Node *temp = node;
    do
    {
        cout<<node->data<<" ";
        node=node->next;
    }
    while(node!=temp);
}

int main()
{
     Node *head = new Node(10);

     Node *a = new Node(20);

     Node *b = new Node(30);

     Node *c = new Node(40);

     head->next = a;
     a->next = b;
     b->next = c;
     c->next = head;

     traverseCLL(head);
     
    return 0;
}