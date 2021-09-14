//Find Middle Element of Linked List using Hare and Tortoise Algorithm
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

void findMiddleElement(Node *node)
{
    Node *fast = node;
    Node *slow = node;

    while(fast!=NULL && fast->next!=NULL)
    {
         fast = fast->next->next;
         slow = slow->next;
    }
    cout<<"Middle Element: "<<slow->data;
}

int main()
{
    Node *head = new Node();
    head->data = 18;

    Node *first = new Node();
    first->data = 20;

    Node *second = new Node();
    second->data = 30;

    Node *third = new Node();
    third->data = 40;

    Node *fourth = new Node();
    fourth->data = 18;


    head->next = first;
    first->next = second;
    second->next = third;
    third->next=fourth;

    findMiddleElement(head);

    return 0;
}