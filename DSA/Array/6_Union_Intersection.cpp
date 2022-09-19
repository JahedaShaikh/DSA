#include<iostream>
using namespace std;

void display(int arr1[],int arr2[], int n,int m){
    for(int i=0; i<n; i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int j=0; j<m; j++){
        cout<<arr2[j]<<" ";
    }
    cout<<endl;
}
void printUnion(int arr1[],int arr2[],int n,int m){
    int i=0, j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            cout<<arr1[i++]<<" ";
        }
        else if(arr1[i]>arr2[j]){
            cout<<arr2[j++]<<" ";
        }
        else{
            cout<<arr2[j++]<<" ";
            i++;
        }
    }
    while(i<n){
        cout<<arr1[i++]<<" ";
    }
    while(j<m){
        cout<<arr2[j++]<<" ";
    }
    cout<<endl;
}

void intersection(int arr1[],int arr2[],int n,int m){
    int i=0, j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            cout<<arr2[j]<<" ";
            i++;
            j++;
        }
    }
}
int main(){
    int arr1[]={1,2,4,5,6};
    int arr2[]={2,3,5,7};
    
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);

    display(arr1,arr2,n,m);
    // printUnion(arr1,arr2,n,m);
    intersection(arr1,arr2,n,m);

    return 0;

}