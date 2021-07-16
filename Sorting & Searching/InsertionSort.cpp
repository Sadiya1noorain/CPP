#include<iostream>
using namespace std;

void InsertionSort(int a[], int size){
    for(int i = 1; i < size; i++){
        int j = i;
        int value = a[i];
        while(j > 0 && a[j - 1] > value){
            a[j] = a[j - 1];
            j--;
        }
        a[j] = value;
    }
        

    return;
}


int main()
{
    int a[20];
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the array elements \n";
    for(int i = 0; i < size; i++){
        cin>>a[i];
    }
    cout<<"The array before sorting is \n";
    for(int i = 0; i < size; i++){
        cout<<"\t"<<a[i];
    }
    cout<<endl;

    InsertionSort(a , size);
    cout<<"The array after sorting is \n";
    for(int i = 0; i < size; i++){
        cout<<"\t"<<a[i];
    }
    cout<<endl;
}