#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1 = mid - l + 1;
    int n2 = r - mid;
    int a[n1];
    int b[n2];

    for(int i = 0; i < n1; i++)
        a[i] = arr[l + i];
    for(int j = 0; j < n2; j++)
        b[j] = arr[mid + 1 + j];

    int i = 0;
    int j = 0;
    int k = l;
    while(i < n1 && j < n2)
    {
        if(a[i] <= b[j]){
            arr[k] = a[i];
            i++;
        }
        else{
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = a[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l >= r){
        return;   
    }
    int mid;
    if((l + r) % 2 == 0)
        mid = (l + r)/2;
    else
        mid = (l + r - 1)/2;

    mergeSort(arr, l, mid );
    mergeSort(arr, mid + 1, r);

    merge(arr, l, mid, r);
}


int main()
{
    int size;
    int arr[20];
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the array elements \n";
    for(int i = 0; i < size; i++){
        cin>>arr[i];
    }
    cout<<"The array before sorting is \n";
    for(int i = 0; i < size; i++){
        cout<<"\t"<<arr[i];
    }
    cout<<endl;
    mergeSort(arr, 0, size);

    cout<<"The array after sorting is \n";
    for(int i = 0; i < size; i++){
        cout<<"\t"<<arr[i];
    }
    cout<<endl;

}