#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void solve(int arr[],int n){
    int max, min;
    if(n==1){
        max=arr[0];
        min=arr[0];
    }
    else if(arr[0]>arr[1]){
        max=arr[0];
        min=arr[1];
    }
    else{
        max=arr[1];
        min=arr[0];
    }
    for(int i=2; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
cout<<"minimum value: "<<min<<endl;
cout<<"maximum value: "<<max<<endl;
}


int main(){
    int arr[]={1000,11,445,1,330,3000};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr, n);
    solve(arr,n);
    // display(arr, n);

}