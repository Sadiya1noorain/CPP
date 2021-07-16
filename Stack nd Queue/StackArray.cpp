#include<iostream>
#include<stdlib.h>
using namespace std;

int a[100], top = -1, n = 100;

void push(int ele){
    if(top > n)
        cout<<"Stack Overflow\n";
    else{
        top ++;
        a[top] = ele;
    }
}

void pop(){
    if(top < 0)
        cout<<"Stack Underflow\n";
    else{
        cout<<"The popped element is "<<a[top]<<" ";
        top --;
    }
    cout<<endl;
}

void display(){
    if (top >= 0){
        for(int i = top; i >= 0; i--){
            cout<<a[i]<<" ";
        }
    }
    else
        cout<<"Stack is empty\n";
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