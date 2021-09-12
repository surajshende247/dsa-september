#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{
    Node *head = new Node();
    Node *a = new Node();
    Node *b = new Node();

    head->data = 20;
    a->data = 15;
    b->data = 10;

    head->next = a;
    a->next = b;
    b->next = NULL;

    //traversing
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << ", ";
        temp = temp->next;
    }

    return 0;
}