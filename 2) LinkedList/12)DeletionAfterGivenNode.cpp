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

void deletionAfterGivenNode(Node * node)
{
    Node *temp = node->next;
    node->next = node->next->next;
    free(temp);
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

    cout<<"Before Deletion: ";
    traverseLinkedList(head);

    deletionAfterGivenNode(first);

    cout<<"\n\n After Deletion: ";
    traverseLinkedList(head);

    return 0;
}