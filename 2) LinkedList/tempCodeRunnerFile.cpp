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

void deleteAtEnd(Node* &head)
{
    //to handle edge cases you can remove comment of below code
    /*
    if(head==NULL)
    {
        cout<<"Linked List is Empty";
        return;
    }
    else if(head->next==NULL)
    {
        Node *temp=head;
        head=NULL;
        free(temp);
        return;
    }
    else if(head->next->next==NULL)
    {
        Node *temp = head->next;
        head->next = NULL;
        free(temp);
        return;
    }*/
    
    Node* node=head;
    while(node->next->next!=NULL)
    {
        node=node->next;
    }

    Node *temp = node->next;
    node->next = NULL;
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

    deleteAtEnd(head);

    cout<<"\nAfter Deletion: ";
    traverseLinkedList(head);

    return 0;
}