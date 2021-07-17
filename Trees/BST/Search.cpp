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

Node* search(struct Node* root, int key){
    if (root == NULL)
        return NULL;

    if (root->data == key)
        return root;
    else if (root->data > key)
        return search(root->left, key);
    else
        return search(root->right, key);
}

int main(){
    struct Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);

    if(search(root, 5) == NULL)
        cout<<"Not Exists\n";
    else
        cout<<"Exists\n";

}