#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void showNthFromLast(Node *head, int n){
    int count = 0;

    Node *node = head;
    while(node!=NULL){
        node=node->next;
        count++;
    }

    int npos=count-n+1;

    /*if(npos>count || npos<0)
    {
        cout<<"Invalid Request";
        return;
    }*/

    node=head;
    while(node!=NULL && npos>1)
    {
        node=node->next;
        npos--;
    }

    cout<<n<<"th Element from Last is: "<<node->data;
}

int main()
{
    Node *head= new Node(2);
    Node *a = new Node(4);
    Node *b = new Node(6);
    Node *c = new Node(8);

    head->next = a;
    a->next = b;
    b->next = c;

    showNthFromLast(head, 2);
}
