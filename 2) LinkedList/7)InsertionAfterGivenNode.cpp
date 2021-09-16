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

void insertAfterGivenNode(int data, Node * node)
{
    //creation of new node with given data
     Node *newNode = new Node(data);     
     
     newNode->next = node->next;

     node->next = newNode;
}

int main()
{
    Node *head = new Node(18);

    Node *first = new Node(20);  

    Node *second = new Node(30);

    Node *third = new Node(17);

    head->next = first;
    first->next = second;
    second->next = third;    

    cout<<"Before Insertion: ";
    traverseLinkedList(head);

    insertAfterGivenNode(5, second);

    cout<<"\n\n After Insertion: ";
    traverseLinkedList(head);

    return 0;
}