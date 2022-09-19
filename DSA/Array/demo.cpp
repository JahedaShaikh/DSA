#include<iostream>
using namespace std;
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int insertArray(int arr[], int size, int capacity, int element, int index){
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1; i>=index; i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
}
void deleteArray(int arr[], int size, int index){
    for(int i=index; i<size; i++){
        arr[i]=arr[i+1];
    }
}



int main(){
    int arr[100]={7,8,12,34,21};
    int size=5, capacity=100, element=9, index=2;
    cout<<"Inserting an element in array"<<endl;
    display(arr, size);
    insertArray(arr,size,capacity,element,index);
    size+=1;
    display(arr, size);
    cout<<"Deleting an element in array"<<endl;
    deleteArray(arr,size,index);
    size-=1;
    display(arr, size);

return 0;
}