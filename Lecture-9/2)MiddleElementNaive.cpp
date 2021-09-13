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

void findMiddle(Node *node)
{
    Node *temp = node;
    
    int count=0;
    while(node!=NULL)
    {
        count++;
        //cout<<node->data<<", ";
        node = node->next;
    }
    int mid=count/2;

    while(mid--)
    {
        temp=temp->next;
    }
    cout<<"Middle Element: "<<temp->data<<endl;
}

int main()
{
    Node *head = new Node();
    head->data = 18;

    Node *first = new Node();
    first->data = 20;

    Node *last = new Node();
    last->data = 30;


    head->next = first;
    first->next = last;


    findMiddle(head);

    return 0;
}