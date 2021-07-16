#include<iostream>
using namespace std;

int BinarySearch(int a[], int size, int key){
    int high = size;
    int low = 0;
    while (low < high)
    {
        int mid = (high + low)/2;
        if (a[mid] < key)
            low = mid + 1;
        else if (a[mid] > key)
            high = mid - 1;
        else
            return mid;
    }
    
    return -1;
}


int main(){
    int a[100];
    int size;
    int key;
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the array in sorted order :\n";
    for(int i = 0; i < size; i++)
        cin>>a[i];
    cout<<"Enter the key element : ";
    cin>>key;
    int i = BinarySearch(a, size, key);
    if(i == -1)
        cout<<"Element not found\n";
    else
        cout<<"The key element is found at index "<<i<<endl;

}