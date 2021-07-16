#include<iostream>
#include<stdlib.h>
using namespace std;

int q[100], rear = - 1, front = - 1, n = 100;

void enqueue(int ele){
    if(rear > n){
        cout<<"Queue Overflow\n";
    }
    else{
        front = 0;
        rear ++;
        q[rear] = ele;
    }
}

void dequeue(){
    if(front == - 1 || front > rear)
        cout<<"Queue Underflow\n";
    else{
        cout<<"The deleted element is "<<q[front]<<endl;
        front ++;
    }
}

void display(){
    if(front == -1)
        cout<<"Queue is empty\n";
    else{
        for(int i = front; i <= rear; i++){
            cout<<q[i]<<" ";
        }
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
        case 1 :cout<<"Enter the value to be pushed : ";
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