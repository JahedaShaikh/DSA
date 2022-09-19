#include<iostream>
using namespace std;

int main(){
    int n,temp,rem,sum=0;
    cout<<"enter the number: ";
    cin>>n;
    temp=n;
    while(n>0){
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    if(temp==sum){
        cout<<"the number is palindrom";
    }
    else{
        cout<<"the number is not palindrom";
    }
return 0;
}