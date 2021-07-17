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

Node* inorderSucc(Node* root){
    Node* ptr = root;
    while (ptr != NULL && ptr->left != NULL )
        ptr = ptr->left;
    return ptr;
    
}

Node* deleteBST(struct Node* root, int key){

    if (root->data > key)
        root->left =  deleteBST(root->left, key);
    else if (root->data < key)
        root->right =  deleteBST(root->right, key);
    else{
        if(root->left == NULL){
            Node* temp = root->right;
            delete(root);
            return temp;
        }
        else if(root->right == NULL){
            Node* temp = root->left;
            delete(root);
            return temp;
        }
        Node* temp = inorderSucc(root->right);
        root->data = temp->data;
        root->right = deleteBST(root->right, temp->data);
    }
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
    struct Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);
    
    inorder(root);
    cout<<endl;
    deleteBST(root, 5);
    inorder(root);



}