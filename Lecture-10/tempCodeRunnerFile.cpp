#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node()
    {
        this->next = NULL;
    }
};

void traverseLinkedList(Node *node)
{
    while(node!=NULL)
    {
        cout<<node->data<<", ";
        node = node->next;
    }
}

void insertAtEnd(int data, Node * &head)
{
    Node *node = head;

    Node *newNode = new Node();
    newNode->data = data;

    while(node->next!=NULL)
    {
       node = node->next;
    }

    node->next = newNode;        
}

int main()
{
    Node *head = new Node();
    head->data = 18;

    Node *first = new Node();
    first->data = 20;

    Node *last = new Node();
    last->data = 30;

    head->next = first;
    first->next = last;

    cout<<"Before Insertion: ";
    traverseLinkedList(head);

    insertAtEnd(5, head);

    cout<<"\nAfter Insertion: ";
    traverseLinkedList(head);

    return 0;
}