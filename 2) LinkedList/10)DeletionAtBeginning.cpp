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


void traverseLinkedList(Node* node)
{   
    while(node!=NULL)
    {
        cout<<node->data<<" ";
        node = node->next;
    }
}

void deleteAtBeginning(Node* &head)
{
    Node* temp = head; 

    head = head->next; 

    free(temp);
}

int main()
{
    Node *head = new Node(8);
    Node *a = new Node(15);
    Node *b = new Node(23);

    head->next = a;
    a->next = b;

    cout<<"Before Deletion: ";
    traverseLinkedList(head);

    deleteAtBeginning(head);

    cout<<"\nAfter Deletion: ";
    traverseLinkedList(head);

    return 0;
}