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


void insertionAfterGivenNode(Node * givenNode, int data)
{
      Node* newNode = new Node(data);

      newNode->next = givenNode->next;
      givenNode->next->prev = newNode;

      givenNode->next = newNode;
      newNode->prev = givenNode;
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

    cout<<"Before Insertion: ";
    traverseForward(head);

     
    insertionAfterGivenNode(a, 18);

    cout<<"After Insertion: ";
    traverseForward(head);   

    return 0;
}