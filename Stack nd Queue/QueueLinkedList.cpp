#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
    int data;
    node* next;
};

struct node* rear = NULL;
struct node* front = NULL;

void enqueue(int ele){
    if (rear == NULL){
        struct node* rear = new node;
        rear->data = ele;
        rear->next = NULL;
        front = rear;
    }
    else{
        struct node* p = new node;
        p->data = ele;
        p->next = rear;
        p->next = NULL;
        rear = p;
    }
}


void dequeue(){
    struct node* temp = front;
    if (front == NULL)
        cout<<"Queue Underflow\n";
    else if(temp->next != NULL){
        temp->next = front;
        cout<<"The deleted element is "<<temp->data<<endl;
        delete temp;
        temp = front;
    }
    else{
        cout<<"The deleted element is "<<front->data<<endl;
        delete front;
        front = NULL;
        rear = NULL;
    }
}

void display(){
    struct node* temp = front;
    if((rear == NULL) && (front == NULL))
        cout<<"The queue is empty\n";
    while (temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    int choice, ele;
    while(1){
        cout<<"1.ENQUEUE 2.DEQUEUE 3.OUTPUT 4.EXIT\n";
        cout<<"Enter the choice : ";
        cin>>choice;
        switch (choice)
        {
        case 1 :cout<<"Enter the value to be added : ";
                cin>>ele;
                enqueue(ele);
            break;
        case 2 :dequeue();
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