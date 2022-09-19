#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            if(arr[i]>arr[j]){
                int temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
            cout<<arr[i]<<endl;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}




int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    selectionSort(arr,n);

return 0;
}