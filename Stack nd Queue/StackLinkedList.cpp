#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    node* next;
};

struct node* top = NULL;

void push(int ele){
    struct node* p = new node;
    p->data = ele;
    p->next = top;
    top = p;
}

void pop(){
    if (top == NULL)
        cout<<"Stack UnderFlow\n";
    else{
        cout<<"The popped element is "<<top->data<<endl;
        top = top->next;
    }
}

void display(){
    struct node* temp = top;
    if (top == NULL)
        cout<<"Stack is empty\n";
    else {
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    cout<<endl;
}

int main(){
    int choice, ele;
    while(1){
        cout<<"1.PUSH 2.POP 3.OUTPUT 4.EXIT\n";
        cout<<"Enter the choice : ";
        cin>>choice;
        switch (choice)
        {
        case 1 :cout<<"Enter the value to be pushed : ";
                cin>>ele;
                push(ele);
            break;
        case 2 :pop();
            break;
        case 3 :display();
            break;
        case 4 :exit(1);
            break;
        default: cout<<"INVALID INDEX\n";
            break;
        }
    }
}