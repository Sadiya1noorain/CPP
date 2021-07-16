#include<iostream>
using namespace std;

void SelectionSort(int a[], int size){
    for(int i = 0; i < size; i++){
        int min = a[i];
        for(int j = i + 1; j < size; j++)
            if(a[j] < min){
                swap(min, a[j]);
            }
        a[i] = min;
    }    
    return;
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = a;
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

    SelectionSort(a , size);
    cout<<"The array after sorting is \n";
    for(int i = 0; i < size; i++){
        cout<<"\t"<<a[i];
    }
    cout<<endl;
}