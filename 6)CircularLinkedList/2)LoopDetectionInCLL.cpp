#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void detectLoop(Node *head)
{
     Node *fast = head;
     Node *slow = head;

     while(fast!=NULL && fast->next != NULL)
     {
        fast = fast->next->next;
        slow = slow->next;
        if(fast==slow)
        {
            cout<<"Loop Detected: "<<fast->data;
            return;
        }   
     }
     cout<<"No Loop Detected";
}

int main()
{

    //Linear LinkedList

     /*Node *head = new Node(10);
     Node *a = new Node(20);
     Node *b = new Node(30);
     Node *c = new Node(40);
     head->next = a;
     a->next = b;
     b->next = c;
     c->next = NULL;*/


    //Circular Linked List
     Node *head = new Node(10);
     Node *a = new Node(20);
     Node *b = new Node(30);
     Node *c = new Node(40);
     head->next = a;
     a->next = b;
     b->next = c;
     c->next = head;

     detectLoop(head);
     
    return 0;
}