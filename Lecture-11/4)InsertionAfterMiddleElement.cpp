#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
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


void insertAfterMiddleElement(int data, Node *node)
{
    Node *fast = node;
    Node *slow = node;
    while(fast!=NULL && fast->next!=NULL)
    {
         fast = fast->next->next;
         slow = slow->next;
    }

    Node *newNode = new Node(data);
    newNode->next = slow->next;
    slow->next = newNode;
}


int main()
{
    Node *head = new Node(18);

    Node *first = new Node(20);


    Node *second = new Node(30);

    Node *third = new Node(40);

    Node *fourth = new Node(18);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next=fourth;

    cout<<"Before Insertion: ";
    traverseLinkedList(head);

    insertAfterMiddleElement(17, head);

    cout<<"\n\n After Insertion: ";
    traverseLinkedList(head);

    return 0;
}