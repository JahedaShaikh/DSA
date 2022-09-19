#include<iostream>
// #include<conio.h>
using namespace std;


void display(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverseArray(int arr[], int n){
    int start=0;
    int end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

//using recursion
void reverse(int arr[], int start, int end){
    if(start>=end){
        return ;
    }
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverse(arr,start+1,end-1);
}

//reverse string
void reverseStr(){
    string s;
    cin>>s;
    int n=s.length();
    int start=0;
    int end=n-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    cout<<s<<endl;
    

}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    display(arr, n);
    // reverseArray(arr,n);
    // display(arr, n);
    reverse(arr,0,n-1);
    display(arr, n);
    cout<<"enter strings: ";
    reverseStr();


return 0;
}