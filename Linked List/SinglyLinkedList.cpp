#include<iostream>
#include<stdlib.h>

using namespace std;

class node{
    public:
    int* data;
    node* next;
};
class LinkedList{
    public:
    node* temp = first;
    int size;
    node* first;
    LinkedList(){
        first = NULL;
        size = 0;
    }

    ~LinkedList(){
        while(temp->next != NULL){
            first = first->next;
            delete temp;
            temp = first; 
        }
               
    }

    bool empty(){
        if(size == 0)
            return true;
        else
            return false;
    }

    void insert(int ele, int index){
        node* p = new node;
        p->data = &ele;
        if(index < 0 || index >size)
            cout<<"Invalid Index! Insertion failed\n";
        else if(index == 0){
            p = first;
            first->next = NULL;
        }
        else{
            for(int i = 0; i < index - 1; i++)
                temp = temp->next;
            p->next = temp->next;
            temp->next = p;
        }
        size++;
        cout<<"Insert successful\n";
    }

    void remove(int index){
        node* p;
        if(index < 0 || index >size)
            cout<<"Invalid Index! Removal failed\n";
        else{
            for(int i = 0; i < index; i++){
                p = temp->next;
                temp->next = p->next;
            }    
        }
        size--;
        cout<<"Remove successful\n";
    }

    int getIndex(int ele){
        for(int i = 0; i < size; i++){
            if(temp->data == &ele)
                return i;
            temp = temp->next;
        }
    }
    int getElement(int index){
        for(int i = 0; i < index; i++)
            temp = temp->next;
        return temp->data;
    }
    void output();
};