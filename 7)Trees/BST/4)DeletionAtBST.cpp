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

void findParent(int val, Node*& parent, Node*& curr){

}

Node* getRightMin(Node* node){

}

void deleteNode(Note*& root, int val)
{
    if(root==NULL){
        return;
    }

    Node* curr = root;
    Node* parent;

    findParent(val, parent, curr);

    //when current node has no childs
    if(curr->left==NULL && curr->right==NULL){
        if(curr==root)
        {
            root=NULL;
        }
        else
        {
            if(parent->left==curr){
                parent->left = NULL;
            }
            else{
                parent->right = NULL;
            }
           
        }

        free(curr);
    }
    else if(curr->left!=NULL && curr->right!=NULL){
        Node *rightMin = getRightMin(curr->right);
        curr->data = rightMin;
        deleteNode(rightMin);
    }
    else
    {
        Node *child;
        if(curr->left!=NULL){
            child = curr->left;
        }else{
            child = curr->right;
        }

        if(curr==root){
            root=child;
        }else{
            if(parent->left==curr){
                parent->left=child;
            }
            else{
                parent->right=child;
            }
        }

        free(curr);
    }
}

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