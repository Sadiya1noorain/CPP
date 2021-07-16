#include<iostream>
using namespace std;

void BubbleSort(int a[], int size){
    for(int i = 0; i < size - 1; i++)
        for(int j = 0; j < size - 1 - i; j++)
            if(a[j] > a[j+ 1]){
                swap(a[j], a[j + 1]);
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

    BubbleSort(a , size);
    cout<<"The array after sorting is \n";
    for(int i = 0; i < size; i++){
        cout<<"\t"<<a[i];
    }
    cout<<endl;
}