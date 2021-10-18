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

void findParent(int val, Node*& parent, Node*& curr){
    while(curr!=NULL && curr->data!=val )
    {
        parent = curr;
        if(val<curr->data)
        {
            curr = curr->left;
        }
        else{
            curr = curr->right;
        }
    }
}

Node* getRightMin(Node* node){
    while(node->left!=NULL){
        node = node->left;
    }
    return node;
}

void deleteNode(Node*& root, int val)
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
        curr->data = rightMin->data;
        deleteNode(curr->right, curr->data);
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
    b->right = d;
    cout<<"\n Before Deletion: \n";
    bfs(root);

    deleteNode(root, 10);

    cout<<"\n After Deletion: \n";
    bfs(root);

    return 0;
}