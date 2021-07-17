#include<iostream>
using namespace std;

struct Node{
    Node* left;
    Node* right;
    int data;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(struct Node* root, int val){
    if(root == NULL)
        return root = new Node(val);
    if(val < root->data)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBST(root->right, val);
    return root;
}

void inorder(struct Node* root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


int main(){
    struct Node* root = new Node(5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);
    inorder(root);
    cout<<endl;

}