#include<iostream>
using namespace std;

int main(){
    int n,sum=0, temp, r;
    cout<<"enter the number: ";
    cin>>n;
    temp=n;
    while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum){
        cout<<"the number is armstrong";
    }
    else{
        cout<<"the number is not armstrong";
    }

return 0;
}