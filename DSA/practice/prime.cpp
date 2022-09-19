#include<iostream>
using namespace std;

int main(){
    int n, temp, flag=0;
    cout<<"enter the number: ";
    cin>>n;
    temp=n/2;
    for(int i=2; i<=n; i++){
        if(n%2==0){
            cout<<"number is not prime ";
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"number is prime ";
    }

    return 0;
}