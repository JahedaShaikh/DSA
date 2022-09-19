#include<iostream>
#include<algorithm>
using namespace std;
void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rearArrange(int arr[], int n){
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            if(i!=j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}
int main(){
    int arr[]={3, -2, 5, -4, 1, 6};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
    rearArrange(arr,n);
    display(arr,n);

    return 0;
}