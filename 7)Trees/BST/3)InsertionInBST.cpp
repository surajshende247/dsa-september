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

void bfs(Node *root){
    queue<Node *> q;
    q.push(root);

    while (!q.empty()) {

        int k = q.size();

        for(int i = 0; i < k; i++){
            Node *temp = q.front();
            q.pop();

            cout<<temp->data<<" ";

            if(temp->left!=NULL)
                q.push(temp->left);

            if(temp->right!=NULL)
                q.push(temp->right);
        }   
        cout<<endl<<endl;     
    }
}

void insert(Node *root, int data){    
    Node *newNode = new Node(data);
    if(root==NULL){
        root = newNode;
    }
    Node* curr = root;
    Node* parent;
    while(curr!=NULL){
        parent = curr;
        if(newNode->data >= curr->data){
            curr = curr->right;
        }
        else{
            curr = curr->left;
        }
    }
    if(newNode->data < parent->data){
        parent->left = newNode;
    }
    else{
        parent->right = newNode;
    }
}

int main(){
    Node *root = new Node(10);
    insert(root, 5);
    insert(root, 20);
    insert(root, 4);
    insert(root, 8);
    insert(root, 30);

    bfs(root);

    return 0;
}