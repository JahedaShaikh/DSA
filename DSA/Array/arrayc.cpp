#include<iostream>
using namespace std;

void display(int a[],int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

// void swapalter(int a[], int n){
//     for(int i=0; i<n; i+=2){
//         if(i+1<n){
//             swap(a[i],a[i+1]);
//         }

//     }
// }

// int add(int a[],int n){
//     int sum=0;
//     for(int i=0; i<n; i++){
//         sum=sum+a[i];
//     }
//     return sum;
// }


void add(int a[], int n){
    // int sum=0;
    for(int i=0; i<n; i++){
        a[i]+=a[i-1];
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[]={3,12,21,13,31,21,3,45};
    int n=8;
    add(a,n);
    // display(a,n);
    // for(int i=1;i<=n; i++){
    //     cout<<a[i];
    // }
    // int k=21;
    // cout<<getmax(a,n)<<" ";
}

// int concate(int[] a){
//     int n=a.length();


// }
// int main(){
//     int a[3]={1,2,1};
//     for(int i=0; i<3; i++){
//         cout<<a[i]<<",";
//     }
//     concate(a);
// }
// void f(int const i){
//     int x=10;
// }
// int main(){
//     int x=20;
//     f()
// }