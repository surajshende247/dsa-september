#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    Node *left;
    Node *right;
    int data;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
int main(){
    Node *root = new Node(7);
    Node *a = new Node(2);
    Node *b = new Node(10);
    Node *c = new Node(8);
    Node *d = new Node(14);

    root->left = a;
    root->right = b;

    b->left = c;
    b-right = d;

    return 0;
}