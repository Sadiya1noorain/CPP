#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* right;
    node* left;
};

node* createNode(int ele){
    node* p = new node();
    p->data = ele;
    p->left = NULL;
    p->right = NULL;
    return p;
}

int main(){
    node* rootNode;
    rootNode = createNode(1);
    rootNode->left = createNode(2);
    rootNode->right = createNode(3);
    rootNode->left->left = createNode(4);
    rootNode->right->left = createNode(5);
    cout<<"The root node is "<<rootNode->data<<endl;
}