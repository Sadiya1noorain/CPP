#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
};

node* create(int ele){
    node* p = new node();
    p->data = ele;
    p->left = NULL;
    p->right = NULL;

    return p;
}

node* search(node* root, int key){
    if (root == NULL)
        return NULL;
    queue < node* > q;
    node* out = NULL;
    q.push(root);
    
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if (temp->data == key){out = temp; cout<<"HIT\n";}
        if (temp->left != NULL) q.push(temp->left);
        if (temp->right != NULL) q.push(temp->right);
    }

    return out;
}

int main(){
    node* root;
    root = create(1);
    root->left = create(2);
    root->right = create(3);
    root->left->left = create(4);
    root->right->right = create(5);

    node* n = search(root, 4);
    cout<<n->data<<endl;

    return 0;
}