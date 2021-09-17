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


void deleteAfterNthElement(int npos, Node *node)
{
     while(node->next!=NULL && npos>1)
     {
         node = node->next;
         npos--;
     }

     Node *temp = node->next;
     node->next = temp->next;
     free(temp);     
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

    cout<<"Before Deletion: ";
    traverseLinkedList(head);

    deleteAfterNthElement(2, head);

    cout<<"\n\n After Deletion: ";
    traverseLinkedList(head);

    return 0;
}