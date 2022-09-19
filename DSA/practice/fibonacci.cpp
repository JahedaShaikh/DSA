/*

#include<iostream>
using namespace std;

int main(){
    int number, n1=0, n2=1, n3;
    cout<<"enter the number: ";
    cin>>number;
    cout<<"0"<<" "<<"1"<<" ";
    for(int i=2; i<=number; i++){
        n3=n1+n2;
        cout<<n3<<" ";
        n1=n2;
        n2=n3;
    }

    return 0;
}

*/

//using Recursion

#include<iostream>
using namespace std;

void fibo(int n){
    static int n1=0, n2=1, n3;
    if(n>0){
        n3=n1+n2;
        n1=n2;
        n2=n3;
        cout<<n3<<" ";
    }
    fibo(n-1);
}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"0"<<" "<<"1"<<" ";
    fibo(n-2);

    return 0;
}
 