#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n){
    int counter=1;
    while(counter<n){
         for(int i=0; i<n-counter; i++){
             cout<<arr[i]<<endl;
             if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
             }
         }
        for(int i=0; i<n; i++){
             cout<<arr[i]<<" ";
        }
         counter++;
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[n];
    }

    BubbleSort(arr,n);
return 0;
}