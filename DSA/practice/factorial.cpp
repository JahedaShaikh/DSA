#include<iostream>
using namespace std;
/*
int main(){
    int n, fact=1;
    cout<<"enter the number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    cout<<"factorial of  "<<n<<" "<<"is = "<<fact;

    return 0;
}
*/

int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"the factorial is:"<<fact(n);

    return 0;
}