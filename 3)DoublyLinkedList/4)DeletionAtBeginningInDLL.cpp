#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    Node *prev;
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        prev = NULL;
        next = NULL;
    }
};

void traverseForward(Node *node)
{
    while(node!=NULL) {
        cout<<node->data<<" ";
        node = node->next;
    }
    cout<<"\n";
}


void deletionAtBeginning(Node * &head)
{
      Node *temp = head;

      head = head->next;
      head->prev = NULL;

      free(temp);
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    cout<<"Before Deletion: ";
    traverseForward(head);

     
    deletionAtBeginning(head);

    cout<<"After Deletion: ";
    traverseForward(head);   

    return 0;
}